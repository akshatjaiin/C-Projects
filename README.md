# 📱 QR Code Generator in C

This project is a simple C program that generates a QR code from a given URL or string and saves it as a PBM (Portable Bitmap) image file. PBM is a simple format for black-and-white images, making it easy to store and view QR codes.

## 🛠️ How It Works

- The program uses the `libqrencode` library to encode the input data as a QR code.
- The generated QR code is saved in the PBM format, which can be easily viewed with image viewers that support this format.
- The program is designed to handle basic error correction and customization of the QR code.

## 📋 Requirements

- C compiler (e.g., `gcc`)
- `libqrencode` library

### Installing `libqrencode`

On Debian-based systems (like Ubuntu), you can install the library using:

```bash
sudo apt-get install libqrencode-dev
On Red Hat-based systems (like Fedora), use:

bash
Copy code
sudo dnf install qrencode-devel
🚀 Getting Started
Clone the repository or download the source code:

bash
Copy code
git clone https://github.com/your-username/qr-code-generator-c.git
cd qr-code-generator-c
Compile the program:

bash
Copy code
gcc -o qr_code_generator main.c -lqrencode
Run the program to generate the QR code:

bash
Copy code
./qr_code_generator
The QR code image will be saved as qrcode.pbm in the current directory.

✨ Features
Generates QR codes for any URL or string.
Simple output format (PBM) for easy viewing.
Uses error correction (level L) to improve scan reliability.
Customizable input data and QR code encoding options.
🛠️ Customization
Input Data: Change the data variable in the main.c file to encode different URLs or text.

c
Copy code
const char *data = "https://www.example.com";
Error Correction Level: Modify the QR_ECLEVEL_L parameter in the QRcode_encodeString function to use different error correction levels (L, M, Q, H).

Output Format: The program currently outputs in PBM format, but you can modify the code to use other formats if needed.

📂 Project Structure
plaintext
Copy code
qr-code-generator-c/
│
├── main.c              # The main source file
└── README.md           # Project documentation
🤝 Contributing
Contributions are welcome! If you have ideas for improvements or new features, feel free to fork the repository, make changes, and submit a pull request.

📜 License
This project is licensed under the MIT License. See the LICENSE file for details.

🙏 Acknowledgments
Thanks to the creators of libqrencode for providing a powerful and easy-to-use QR code generation library.


