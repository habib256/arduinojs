/*
 * Eteindre ou allumer la LED_BUILTIN d'un Arduino en fonction du message reçu
 * d'un navigateur web par l'intermédiaire de Node.js.
 * Christophe BOBILLE juin 2017
 */

void process(unsigned char inChar) {
  switch (inChar) {
    case '0':
      digitalWrite(LED_BUILTIN, LOW);
      Serial.print("0");
      break;
    case '1':
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.print("1");
      break;
    default:
      Serial.println("error");
  }
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
     unsigned char inChar = (unsigned char)Serial.read();
     process(inChar);
  }
}
