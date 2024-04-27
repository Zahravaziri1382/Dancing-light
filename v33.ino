int ledpins[]={2,3,4,5,6,7,8,9};
void setup() {
for(int i=0;i<8;i++){//  Apply the for function
pinMode(ledpins[i],OUTPUT);
}

}

void loop() {
 for(int i=0;i<8;i++){ // //  Apply the for function
  digitalWrite(ledpins[i],HIGH);//turn on lamp
  delay(500);//delay500seconds
  digitalWrite(ledpins[i],LOW);//turn off lamp

 }

}
