#include <stdio.h>
#include <qrencode.h>
#include <stdlib.h>
#include <string.h>

void save_qr_code(QRcode *qrcode, const char *filename) {
    int width = qrcode->width;
    FILE *f = fopen(filename, "wb");
    if (f == NULL) {
        perror("Failed to open file for writing");
        exit(EXIT_FAILURE);
    }

    // Simple PBM format for black and white images
    fprintf(f, "P1\n%d %d\n", width, width);

    for (int y = 0; y < width; y++) {
        for (int x = 0; x < width; x++) {
            fputc(qrcode->data[y * width + x] & 1 ? '1' : '0', f);
        }
        fputc('\n', f);
    }

    fclose(f);
}

int main() {
    const char *data = "https://www.example.com";
    QRcode *qrcode = QRcode_encodeString(data, 0, QR_ECLEVEL_L, QR_MODE_8, 1);

    if (qrcode == NULL) {
        fprintf(stderr, "Failed to encode QR code\n");
        return EXIT_FAILURE;
    }

    save_qr_code(qrcode, "qrcode.pbm");
    QRcode_free(qrcode);

    printf("QR code generated and saved as 'qrcode.pbm'\n");
    return 0;
}
