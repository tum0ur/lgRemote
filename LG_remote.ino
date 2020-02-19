#include <IRLibAll.h>
String readString;
IRsend mySender;
 
void setup() {
  Serial.begin(9600);
  Serial.println("Serial is up");
}
 
void loop() {
  while (Serial.available()) {
    delay(3); 
    char c = Serial.read();
    readString += c;
  }
  
  if (readString.length() >0) {
    Serial.println(readString);
    if(readString.indexOf("on") >=0)
    {
    mySender.send(NEC,0x20DF23DC, 32);
    }
    else if(readString.indexOf("input") >=0)
    {
    mySender.send(NEC,0x20DF202F, 32);
    }
    else if(readString.indexOf("settings") >=0){
    mySender.send(NEC, 0x20DFC23D, 32);
    }
    else if(readString.indexOf("incvol") >=0){
    mySender.send(NEC, 0x20DF40BF, 32);
    }
    else if(readString.indexOf("decvol") >=0){
    mySender.send(NEC, 0x20DFC03F, 32);
    }
    else if(readString.indexOf("mute") >=0){
    mySender.send(NEC, 0x20DF906F, 32);
    }
    else if(readString.indexOf("home") >=0){
    mySender.send(NEC, 0x20DF3EC1, 32);
    }
    else if(readString.indexOf("back") >=0){
    mySender.send(NEC, 0x20DF14EB, 32);
    }
    else if(readString.indexOf("exit") >=0){
    mySender.send(NEC, 0x20DFDA25, 32);
    }
    else if(readString.indexOf("up") >=0){
    mySender.send(NEC, 0x20DF02FD, 32);
    }
    else if(readString.indexOf("down") >=0){
    mySender.send(NEC, 0x20DF827D, 32);
    }
    else if(readString.indexOf("right") >=0){
    mySender.send(NEC, 0x20DF609F, 32);
    }
    else if(readString.indexOf("left") >=0){
    mySender.send(NEC, 0x20DFE01F, 32);
    }
    else if(readString.indexOf("ok") >=0){
    mySender.send(NEC, 0x20DF22DD, 32);
    }
    else if(readString.indexOf("prime") >=0){
    mySender.send(NEC, 0x20DF3AC5, 32);
    }
    else if(readString.indexOf("netflix") >=0){
    mySender.send(NEC, 0x20DF6A95, 32);
    }
    else if(readString.indexOf("hdmi1") >=0){
    mySender.send(NEC, 0x20DF738C, 32);
    }
    else if(readString.indexOf("hdmi2") >=0){
    mySender.send(NEC, 0x20DF33CC, 32);
    }
    else if(readString.indexOf("hdmi3") >=0){
    mySender.send(NEC, 0x20DF9768, 32);
    }
    else if(readString.indexOf("energy") >=0){
    mySender.send(NEC, 0x20DFA956, 32);
    }
    else if(readString.indexOf("off") >=0){
    mySender.send(NEC, 0x20DFA35C, 32);
    }
    else if(readString.indexOf("ezpicture") >=0){
    mySender.send(NEC, 0x20DFB24D, 32);
    }
    else if(readString.indexOf("ezsleep") >=0){
    mySender.send(NEC, 0x20DF708F, 32);
    }
//    else if(readString.indexOf("energy") >=0){
//    mySender.send(NEC, 0x20DFA956, 32);
//    }
//    else if(readString.indexOf("energy") >=0){
//    mySender.send(NEC, 0x20DFA956, 32);
//    }
    else {
    Serial.println("wrong command fool");}
  readString="";
    }

  }
  
