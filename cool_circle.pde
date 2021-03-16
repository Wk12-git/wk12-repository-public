// learned from thedotisblack creative coding thedotisblack.com

color[] colBlueArray = {
  color(25, 165, 190),
  color(95, 170, 200),
  color(120, 190, 210),
  color(170, 210, 230),
  color(205, 225, 245),
  color(220, 240, 250)
};

color[] colPurpleArray = {
  color(#A215B2),
  color(#E64AF8),
  color(#DE81E9),
  color(#D99AE1),
  color(#D6B6DA),
  color(#AE81B4)
};

void setup() {
  size(900, 900);
  surface.setLocation(987, 70);
  noStroke();
  //noLoop();
  mouseX = 10;
}

void draw() {
  
  background(#282828);
  
  translate(width/2, height/2);
  
  float rVar = mouseX;
  float rMax = 400;
  
  
  for(float r=0; r<400; r+=rVar) {
    
    float c = 2*PI*r;
    float cSegment = map(r, 0, rMax, rVar+3.75, rVar/2);
    float aSegment = round(c/cSegment);
    float ellipseSize = map(r, 0, rMax, rVar+0.75-1, rVar/4);
    
    for(float th=0; th<360; th+=360/aSegment){
      pushMatrix();
      rotate(radians(th));
      if(mousePressed == true) {
        if(mouseButton == LEFT) {
          fill(colBlueArray[int(random(5))]);
        } else if(mouseButton == RIGHT) {
          fill(#A01EA2);
        }
      } else {fill(#5EC06B);}
      
      
      ellipse(r, 0, ellipseSize, ellipseSize);
      popMatrix();
    }
    
  }
  
  
}

void keyPressed() {
  if(key==' ') {
    background(#282828);
    redraw();
  }
}
