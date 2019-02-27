int linebreak = 0;
void forward()
{ digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);

}
void backward()
{ digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

}

void hleft()
{ digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);

}

void hright()
{ digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);

}

void left()
{ digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);

}
void right()
{ digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

}

void line_break()
{
  linebreak++;
}

/*void aforward()
{ analogWrite(10, 150);
  analogWrite(11, 0);
  analogWrite(12, 150);
  analogWrite(13, 0);

}
void abackward()
{ analogWrite(10, 0);
  analogWrite(11, 150);
  analogWrite(12, 0);
  analogWrite(13, 150);

}

void ahleft()
{ analogWrite(10, 0);
  analogWrite(11, 150);
  analogWrite(12, 150);
  analogWrite(13, 0);

}

void ahright()
{ analogWrite(10, 150);
  analogWrite(11, 0);
  analogWrite(12, 0);
  analogWrite(13, 150);

}

void aleft()
{ analogWrite(10, 0);
  analogWrite(11, 0);
  analogWrite(12, 150);
  analogWrite(13, 0);

}
void aright()
{ analogWrite(10, 150);
  analogWrite(11, 0);
  analogWrite(12, 0);
  analogWrite(13, 0);

}*/
void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(6, OUTPUT);   //pWM
  pinMode(7, OUTPUT);   //PWM
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  int l = digitalRead(0);
  int m = digitalRead(1);
  int r = digitalRead(2);
  Serial.print(linebreak);
  if (linebreak < 5)
  { if (l == 1 && m == 0 && r == 1)
      forward();
    if (l == 0 && m == 1 && r == 1)
      left();
    if (l == 1 && m == 1 && r == 0)
      right();
    if (l == 0 && m == 0 && r == 1)
      hleft();
    if (l == 1 && m == 0 && r == 0)
      hright();
    if (l == 0 && m == 0 && r == 0)
      forward();
    if (l == 1 && m == 1 && r == 1)
    {
      forward();
      line_break();
      while (l == 1 && m == 1 && r == 1)
      {l= digitalRead(0);
       m= digitalRead(1);
       r= digitalRead(2);
        continue;
      }
    }
  }
  else if (linebreak==5)
  {  analogWrite(6,255);
     analogWrite(7,255);
    if (l == 1 && m == 0 && r == 1)
      forward();
    if (l == 0 && m == 1 && r == 1)
      left();
    if (l == 1 && m == 1 && r == 0)
      right();
    if (l == 0 && m == 0 && r == 1)
      hleft();
    if (l == 1 && m == 0 && r == 0)
      hright();
    if (l == 0 && m == 0 && r == 0)
      forward();
    if (l == 1 && m == 1 && r == 1)
    {
      forward();
      line_break();
      while (l == 1 && m == 1 && r == 1)
      {l= digitalRead(0);
       m= digitalRead(1);
       r= digitalRead(2);
        continue;
      }
    }

  }
 else if (linebreak >= 6)
  {
    if (l == 1 && m == 0 && r == 1)
      forward();
    if (l == 0 && m == 1 && r == 1)
      left();
    if (l == 1 && m == 1 && r == 0)
      right();
    if (l == 0 && m == 0 && r == 1)
      hleft();
    if (l == 1 && m == 0 && r == 0)
      hright();
    if (l == 0 && m == 0 && r == 0)
      forward();

    if (l == 1 && m == 1 && r == 1)
    {
      forward();
      line_break();
      while (l == 1 && m == 1 && r == 1)
      { l=digitalRead(0);
        m=digitalRead(1);
        r=digitalRead(2);
        continue;
      }
    }
    if (linebreak == 8)
      left();
  }
  














  

}