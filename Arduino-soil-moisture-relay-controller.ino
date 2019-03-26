//-------------------------------------------------------------------
// Arduino example to control a relay based on moisture values
//-------------------------------------------------------------------


int moisture_pin = A0;
int relay_pin = 2;
int moisture_value;


//Chamge the minimum percentage here!
int minimum_percentage = 50;

void setup() {

  //Start serial connection
   Serial.begin(9600);

   pinMode(relay_pin, OUTPUT);
    
   Serial.println("Getting data from the sensor ...");

  //Delay so the sensor can initialize
   delay(2000);

}

void loop() {

   moisture_value= analogRead(moisture_pin);
   moisture_value = map(moisture_value,550,0,0,100);

   Serial.print("Mositure value : ");
   Serial.print(moisture_value);
   Serial.println(" %");

   if (moisture_value < minimum_percentage) {
    digitalWrite(relay_pin, HIGH);
   } else {
    digitalWrite(relay_pin, LOW);

   }

   delay(1000);

   }
