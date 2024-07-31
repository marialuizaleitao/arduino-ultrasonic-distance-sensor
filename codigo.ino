// Definindo os pinos do sensor HC-SR04
const int triggerPin = 4; // Pino Trigger do HC-SR04
const int echoPin = 5; // Pino Echo do HC-SC04

void setup() {
  // Inicializa o pino Trigger como saíÂda e o pino Echo como entrada
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Inicializa o monitor serial a 9600 bps
  Serial.begin(9600);  
}

void loop() {
  // Limpa o pino do Trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  // Gera um pulso de 10 microsegundos no pino Trigger
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // Mede o tempo de retorno do pulso no pino Echo
  long duration = pulseIn(echoPin, HIGH);

  // Calcula a distância em centímetros
  float distance = (duration / 2.0) * 0.0344;
  
  // Exibe a distância no monitor serial
  Serial.print("Distância: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Aguarda 500 milissegundos antes da próxima medição
  delay(500);
}
