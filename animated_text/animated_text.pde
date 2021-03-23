//import bigBrain.*;

import java.util.*;

class Vars{
  
  public
    PFont Font;
    float x = 20;
    float y = 50;
    float vx = 100;
    float vy = 0;
    float speed = 10.0/200.0;
    float gravity = 400;
    float bounceGoBrrr = 0.9;
    
  
}



Vars vars = new Vars();
Random rand = new Random();

void setup(){

  
  size(800, 500);
  smooth();
  frameRate(30);
  
  vars.Font = createFont("Verdana Bold", 48);
  textFont(vars.Font);
  
  
  
  
}

   

void draw(){
  
String[] fontList = PFont.list();
printArray(fontList);
  
  beginShape();
  fill(204, 214, 255);
  rect(0,0,width,height);
  endShape();
  
  //print word
  int rand_int1 = rand.nextInt(255);
  int rand_int2 = rand.nextInt(255);
  int rand_int3 = rand.nextInt(255);
  fill(rand_int1, rand_int2, rand_int3);
  text("EH", vars.x, vars.y);
  for(float i = 1; i < 10; i=i+20){
    vars.vy += (vars.gravity * vars.speed);
    vars.x += (vars.vx * vars.speed);
    vars.y += vars.vy * vars.speed;
    if (vars.x < 0){
      vars.x = 0;
      vars.vx *= -vars.bounceGoBrrr;
    } else if (vars.x > width-100){
      
      vars.x = width-100;
      vars.vx *= -vars.bounceGoBrrr;
    }
    if (vars.y > height){
      vars.y = height;
      vars.vy *= -vars.bounceGoBrrr;
    }
  }
  
  
  
  
  
  
  
  //create circle
  noFill();

    strokeWeight(2);
    stroke(204, 102, 20);
    ellipse(vars.x+35, vars.y, 120, 120);
  
  
  vars.vy += (vars.gravity * vars.speed);
  vars.x += (vars.vx * vars.speed);
  vars.y += vars.vy * vars.speed;
  if (vars.x < 20){
    vars.x = 0;
    vars.vx *= -vars.bounceGoBrrr;
  } else if (vars.x > width-50){
    
    vars.x = width-90;
    vars.vx *= -vars.bounceGoBrrr;
  }
  if (vars.y > height){
    vars.y = height;
    vars.vy *= -vars.bounceGoBrrr;
  }
  
}
