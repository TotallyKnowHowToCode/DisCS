#include "frequencies.h"
#include "compilationEngine.h"
#define speaker 10 // pin no. for speaker
int xOver = 499;


//Lawrence's playNote void here (replacement for Oliver's placeholder void)

//void playTone(int buzzer, unsigned int note, int len) {
  //tone(buzzer, note, len);
//}

playtone(speaker, song[pointerLoc] [0], song[pointerLoc][1]); {
delay(song[pointerLoc][1]);
delay(10);
pointerLoc = pointer + 1;
}
void playSong(int startPos) {
  int inLoop = 0;
  int loopedFrom = 0;
  if (startPos == "") { startPos = 0; }
  int oldLoc = pointerLoc;
  pointerLoc = startPos;
  int len = sizeof song / sizeof song[0];
  Serial.println(len);
  while (pointerLoc < len) {
    int[] line = {};
    line[0] = song[pointerLoc][0];
    line[1] = song[pointerLoc][1];
    line[2] = song[pointerLoc][2];
    if (line[0] == "") { break; } else {
      if (line[0] == 0) {
        //Lawrence's other bit here
    void playtone(int buzzer, unsigned int note, int len {
      tone(buzzer, note [10,000], len [5000]);
    }
      } else {
        //Harry's stuff here
      }
    }
  }
  pointerLoc = oldLoc;
}

void setPointer(int loc) {
  pointerLoc = loc;
}
