float t;

static final int NUM_LINES = 10;

void setup(){

  background(20);
  size(2000, 1000);

}


void draw(){
  background(20);
  stroke(255);
  strokeWeight(5);
  
  translate(width/2, height/2);
  
  for(int i = 0; i < NUM_LINES; i++) {
    line(x1(t + i), y1(t + i), x2(t + i), y2(t + i));
  }
  t += 0.5;
}

float x1(float t){
  return sin(t/10) * 400 + sin(t/15) * 400;
}

float y1(float t) {
  return cos(t/10) * 200;
}

float x2(float t) {
  return sin(-t/10) * 200 + sin(t) * 2 + cos(t) * 10;
}

float y2(float t) {
  return -cos(t/20) * 200 + cos(t/12) * 60;
}
