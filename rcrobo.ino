int left_ford = 8;
int left_back = 9;
int right_ford = 10;
int right_back = 11;

int ENA = 5;
int ENB = 6;
char val;

void setup() 
{  
pinMode(left_ford, OUTPUT);  
pinMode(left_back, OUTPUT);  
pinMode(right_ford, OUTPUT);  
pinMode(right_back, OUTPUT);
  pinMode (ENA,OUTPUT);
   pinMode (ENB,OUTPUT);
       analogWrite(ENA, 255);
       analogWrite(ENB, 255); 
Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);

  switch(val)
  {
    case 'F':
           analogWrite(ENA, 255);
       analogWrite(ENB, 255); 
    digitalWrite(left_ford, 1);
      digitalWrite(left_back, 0);
      digitalWrite(right_ford, 0);
      digitalWrite(right_back, 1);  
      break;

      case 'R':

       analogWrite(ENA, 255);
       analogWrite(ENB,   0);
      digitalWrite(left_ford, 1);
    digitalWrite(left_back, 0);

    break;

     case 'L':
       analogWrite(ENA,   0);
       analogWrite(ENB, 255);
      digitalWrite(right_ford, 0);
    digitalWrite(right_back, 1);
    break;

     case 'I':
     digitalWrite(left_ford, 1);
    digitalWrite(left_back, 0);
    digitalWrite(right_ford, 1);
    digitalWrite(right_back, 0);
    break;
    
         case 'G':
     digitalWrite(left_ford, 0);
    digitalWrite(left_back, 1);
    digitalWrite(right_ford, 0);
    digitalWrite(right_back, 1);
    break;  

           case 'H':
       analogWrite(ENA,   0);
       analogWrite(ENB, 255);
      digitalWrite(right_ford, 1);
    digitalWrite(right_back, 0);
    break;

         case 'J':
       analogWrite(ENA, 255);
       analogWrite(ENB,   0);
      digitalWrite(left_ford, 0);
    digitalWrite(left_back, 1);
    break;

        case 'B':
               analogWrite(ENA, 255);
       analogWrite(ENB, 255); 
      digitalWrite(left_ford, 0);
    digitalWrite(left_back, 1);
    digitalWrite(right_ford, 1);
    digitalWrite(right_back, 0);
    break;

    default:
  digitalWrite(left_ford, 0);
    digitalWrite(left_back, 0);
    digitalWrite(right_ford, 0);
    digitalWrite(right_back, 0);
   break;
    
    
  }
  }
}

 
