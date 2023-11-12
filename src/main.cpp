#include <Arduino.h>

//Définition des variables
const int led_verte=1 ; //définition de la broche 1 comme étant la led verte
const int led_jaune=2 ; //définition de la broche 2 comme étant la led jaune
const int led_rouge=3 ; //définition de la broche 3 comme étant la led rouge
const int pindetecteurdepoul = A0; //définition de la broche A0 comme étant le détecteur de pouls
int Poul; //définition de la variable Poul

void setup() {
  pinMode(pindetecteurdepoul,INPUT); //définition de la broche A0 comme étant une entrée
  pinMode(led_verte,OUTPUT); //définition de la broche 1 comme étant une sortie
  pinMode(led_jaune,OUTPUT); //définition de la broche 2 comme étant une sortie
  pinMode(led_rouge,OUTPUT); //définition de la broche 3 comme étant une sortie
  }

void loop() {
  Poul=analogRead(pindetecteurdepoul); //lecture de la valeur du détecteur de pouls
  if (Poul>100 && Poul<=160){ //si la valeur du détecteur de pouls est comprise entre 100 et 170
    digitalWrite(led_rouge,HIGH); //la led rouge s'allume
    digitalWrite(led_jaune,LOW); //la led jaune s'éteint
    digitalWrite(led_verte,LOW); //la led verte s'éteint
  }
  else if (Poul<50 && Poul >= 30 ){ //si la valeur du détecteur de pouls est comprise entre 30 et 50
    digitalWrite(led_rouge,LOW); //la led rouge s'éteint
    digitalWrite(led_jaune,HIGH); //la led jaune s'allume
    digitalWrite(led_verte,LOW); // la led verte s'éteint
  }
  else if (Poul>=50 && Poul<=100{ //si la valeur du détecteur de pouls est comprise entre 50 et 100
    digitalWrite(led_rouge,LOW); //la led rouge s'éteint
    digitalWrite(led_jaune,LOW); //la led jaune s'éteint
    digitalWrite(led_verte,HIGH); //la led verte s'allume
  }
else{ //si la valeur du détecteur de pouls n'est pas comprise entre 30 et 170
   digitalWrite(led_rouge,LOW); //la led rouge s'éteint
   digitalWrite(led_jaune,LOW); //la led jaune s'éteint
   digitalWrite(led_verte,LOW); //la led verte s'éteint
}
}