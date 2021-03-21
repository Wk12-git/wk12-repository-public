import java.util.*;
PImage fire;
PImage city;

void setup(){
  
  size(800,500);
  smooth();
  noStroke();
 
  fire = loadImage("fire.jpg");
  city = loadImage("city.jpg");
  
}



void draw(){

  
  fire.resize(800, 500);
  city.resize(800, 500);
  city.blend(fire, 0, 0, 800, 500, 0, 0, 800, 500, LIGHTEST);
  image(fire, 0, 0);
  image(city, 0, 0);
  
  
}
