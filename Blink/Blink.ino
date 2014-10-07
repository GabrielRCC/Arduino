int led = 13; //Define a variavel led como 13

void setup() { //esta função é executada apenas uma vez

  pinMode(led, OUTPUT);//Inicializa a porta digital 13 em modo saida
  
}

void loop() {//esta função é executada infinitamente

  digitalWrite(led, HIGH);//Liga o led com o parametro HIGH
  delay(1000); //Espera um segundo
  digitalWrite(led, LOW); //Desliga o led com o parametro LOW
  delay(1000); //Espera um segundo
  
} 
