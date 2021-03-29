



class Face{

  public int shapeX, shapeY, shapeW, shapeH;
  
  public void drawNose(int x1, int y1, int x2, int y2, int x3, int y3){
      strokeWeight(3);
      triangle(x1, y1, x2, y2, x3, y3);
  }
  
  public void drawScar(int x1, int y1, int x2, int y2){
      strokeWeight(4);
      line(x1, y1, x2, y2);
  }
  
  public void drawBrow(int x1, int y1, int x2, int y2){
      strokeWeight(4);
      line(x1, y1, x2, y2);
  }
  
}

Face eye1 = new Face();
Face eye2 = new Face();
Face brow1 = new Face();
Face brow2 = new Face();
Face nose = new Face();
Face mouth = new Face();
Face scar = new Face();

void setup(){
  background(255);
  size(800, 800);
  stroke(255);
  smooth();

}

void draw(){

  eye1.shapeX = 230;
  eye1.shapeY = 300;
  eye1.shapeW = 100;
  eye1.shapeH = 80;
  
  eye2.shapeX = 520;
  eye2.shapeY = 300;
  eye2.shapeW = 100;
  eye2.shapeH = 80;
  
  //face
  fill(#FFDBAC);
  ellipse(400, 400, 700, 800);
  
  
  //nose
  nose.drawNose(380, 300, 320, 430, 440, 430);
  
  
  //scar
  beginShape();
  stroke(#FF6347);
  scar.drawScar(230, 300, 260, 360);
  endShape();
  
  
  
  //brow1
  beginShape();
  stroke(0);
  brow1.drawBrow(300, 200, 120, 200);
  endShape();
  
  //brow2
  beginShape();
  stroke(0);
  brow2.drawBrow(600, 200, 400, 200);
  endShape();
  
  
  
  
  //eyes
  strokeWeight(2);
  stroke(0);
  ellipse(eye1.shapeX, eye1.shapeY, eye1.shapeW, eye1.shapeH);
  strokeWeight(2);
  stroke(0);
  ellipse(eye2.shapeX, eye2.shapeY, eye2.shapeW, eye2.shapeH);
  
  
  noFill();
  ellipse(eye1.shapeX, eye1.shapeY, eye1.shapeW-80, eye1.shapeH-60);
  strokeWeight(0.5);
  fill(#81BFE4);
  ellipse(eye1.shapeX, eye1.shapeY, eye1.shapeW-60, eye1.shapeH-40);
  
  noFill();
  ellipse(eye2.shapeX, eye2.shapeY, eye2.shapeW-80, eye2.shapeH-60);
  strokeWeight(0.5);
  fill(#81BFE4);
  ellipse(eye2.shapeX, eye2.shapeY, eye2.shapeW-60, eye2.shapeH-40);
  
  
  curve(
  
  
  
  
  
  
  
  
  
  

}
