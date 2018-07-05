// Programa : Alarme com sensor de gas MQ-2
// Autor : Arduino e Cia

// Definicoes dos pinos dos leds e buzzer
int pin_led_verm = 7;
int pin_led_verde = 5;

// Definicoes dos pinos ligados ao sensor 
int pin_a0 = A2;

int nivel_sensor = 250;

void setup()
{
  // Define os pinos de leitura do sensor como entrada
  pinMode(pin_a0, INPUT);
  // Define pinos leds e buzzer como saida
  pinMode(pin_led_verm, OUTPUT);
  pinMode(pin_led_verde, OUTPUT);
  // Inicializa a serial
  Serial.begin(9600);
}

void loop()
{
  // Le os dados do pino analogico A0 do sensor
  int valor_analogico = analogRead(pin_a0);
  // Mostra os dados no serial monitor
  Serial.print(" Pino A2 : ");
  Serial.println(valor_analogico);
  // Verifica o nivel de gas/fumaca detectado
//  if (valor_analogico > nivel_sensor)
//  {
//    // Liga o buzzer e o led vermelho, e
//    // desliga o led verde
//    digitalWrite(pin_led_verm, HIGH);
//    digitalWrite(pin_led_verde, LOW);
//
//  }
//  else
//  {
//    // Desliga o buzzer e o led vermelho, e
//    // liga o led verde
//    digitalWrite(pin_led_verm, LOW);
//    digitalWrite(pin_led_verde, HIGH);
//  }
delay(1000);
}

