#include "Keyboard.h"
#include "Mouse.h"
#include <iostream>
#include <windows.h>

int x;

void move();
void randomMove();

void gameplay(int leftTimer) {
  while (true) {
    // Antiafk
    Sleep(leftTimer);
    sendKey('b');
    Sleep(9500);
    MouseMove(700, 135);
    move();
    randomMove();
  }
}

void move() {
  Sleep(3000);
  RightClick();
  Sleep(3000);
  RightClick();
}

void randomMove() {
  int random = rand();
  MouseMove(800, random);
  move();
  int random2 = rand();
  MouseMove(800, random2);
  move();
  int random3 = rand();
  MouseMove(800, random3);
  move();
  sendKey('w');
}