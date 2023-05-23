#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define BEEP_FREQUENCY 1000
#define BEEP_DURATION 500

int main() {
    char key;
    int frequency;

    printf("Electronic Organ\n");
    printf("Press A, S, D, F, G, H, or J to play a sound.\n");
    printf("Press Q to quit.\n");

    while (1) {
        key = getch();

        if (key == 'q' || key == 'Q') {
            printf("Quit\n");
            break;
        }

        switch (key) {
            case 'a':
            case 'A':
                frequency = BEEP_FREQUENCY;
                break;
            case 's':
            case 'S':
                frequency = BEEP_FREQUENCY + 200;
                break;
            case 'd':
            case 'D':
                frequency = BEEP_FREQUENCY + 400;
                break;
            case 'f':
            case 'F':
                frequency = BEEP_FREQUENCY + 600;
                break;
            case 'g':
            case 'G':
                frequency = BEEP_FREQUENCY + 800;
                break;
            case 'h':
            case 'H':
                frequency = BEEP_FREQUENCY + 1000;
                break;
            case 'j':
            case 'J':
                frequency = BEEP_FREQUENCY + 1200;
                break;
            default:
                frequency = 0;
                break;
        }

        if (frequency > 0) {
            Beep(frequency, BEEP_DURATION);
        }
    }

    return 0;
}
