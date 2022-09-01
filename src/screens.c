#include "../gba.h"
#include "../src/images.h"

/**
 * Sets the screen to the title screen.
 */
void buildTitleScreen(void) {
    drawFullScreenImageDMA(title);
    drawCenteredString(15,0, WIDTH, HEIGHT, "Press Enter to continue.", WHITE);
}

/**
 * Sets the screen for player to select character.
 */
void buildPlayerSelect(void) {
    drawImageDMA(100, 20, 30, 30, Dustin);
    drawImageDMA(100, 50, 30, 30, Mike);
    drawImageDMA(100, 80, 30, 30, Lucas);
    drawImageDMA(100, 110, 30, 30, Hopper);
    drawImageDMA(100, 140, 30, 30, Will);
    drawImageDMA(100, 170, 30, 30, Eleven);
    drawImageDMA(100, 200, 30, 30, Nancy);
    drawCenteredString(10,0, WIDTH, HEIGHT, "Player - Select a character.", WHITE);
}

void buildOpponentSelect(void) {
    drawImageDMA(100, 20, 30, 30, Dustin);
    drawImageDMA(100, 50, 30, 30, Mike);
    drawImageDMA(100, 80, 30, 30, Lucas);
    drawImageDMA(100, 110, 30, 30, Hopper);
    drawImageDMA(100, 140, 30, 30, Will);
    drawImageDMA(100, 170, 30, 30, Eleven);
    drawImageDMA(100, 200, 30, 30, Nancy);
    drawCenteredString(10,0, WIDTH, HEIGHT, "Select a character as your opponent.", WHITE);
}

