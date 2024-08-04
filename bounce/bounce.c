#include <stdio.h>
#include <unistd.h>  // For usleep function

#define WIDTH 40
#define HEIGHT 10

void clear_screen() {
    printf("\033[H\033[J");  // Clear the console
}

void print_ball(int x, int y) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == y && j == x)
                printf("O");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int x = 0, y = 0;
    int x_speed = 1, y_speed = 1;

    while (1) {
        clear_screen();
        print_ball(x, y);

        // Update ball position
        x += x_speed;
        y += y_speed;

        // Check for collisions with the walls
        if (x <= 0 || x >= WIDTH - 1)
            x_speed = -x_speed;
        if (y <= 0 || y >= HEIGHT - 1)
            y_speed = -y_speed;

        usleep(100000);  // Slow down the animation
    }

    return 0;
}
