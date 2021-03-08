import java.util.*;
PFont f;
PImage funnyImg;





class FunnyShape{
public
  int ellipseW = 70;
  int ellipseH = 70;
  int rectW = 700;
  int rectH = 100;
}

void setup() {
  size(2700, 3300);
  smooth();
  background(#C45C1F);
  noStroke();
  String url = "https://jleague.espzen.com/pics/players/uploaded/3343_20160413154838players.jpg";
  funnyImg = loadImage(url, "png");
}


void draw() {
  
FunnyShape circle = new FunnyShape();
FunnyShape rectangle = new FunnyShape();

beginShape();
noStroke();
fill(#542A00);
rect(3000, 650, rectangle.rectW, rectangle.rectH);
endShape();

  
  
  
beginShape();
noStroke();
fill(#F2E311);
ellipse(113, 700, circle.ellipseW, circle.ellipseH);
endShape();
  
  
funnyImg.resize(300,300);
image(funnyImg, 200, 200);
  
//draw triangles with lines

ArrayList<Integer> ki_ = new ArrayList<Integer>();
for(int i = 50; i<=200; i=i+50) {

  ki_.add(i);

}

for(int i = 0; i < ki_.size(); i++) {
  System.out.println(ki_.get(i));
}

/*textFont(f,36);
fill(#0000CC);
text("Heyyyyyy", 50, 50);*/

textAlign(LEFT);
textSize(52);
fill(0, 102, 153, 204);
text("Heyyyy", 50, 80, -30);

for(int k:ki_) {

  for(int y = 10; y<500; y+=1){
    
    for(int i = 0; i<1000; i+=k) {
      stroke(49, 102, 33);
      strokeWeight(2);
      line(1000, i+=y, 150, 700);
      
    }
    
    for(int i = 0; i<1000; i+=k) {
      
      stroke(49, 102, 33);
      strokeWeight(2);
      line(1500, i+=y, 150, 700);
      
    }
    
    for(int i = 0; i<1000; i+=k) {
      
      stroke(49, 102, 33);
      strokeWeight(2);
      line(2000, i+=y, 150, 700);
      
    }
    
    for(int i = 0; i<1000; i+=k) {
      
      stroke(49, 102, 33);
      strokeWeight(2);
      line(2500, i+=y, 150, 700);
      
    }
    
    for(int i = 0; i<1000; i+=k) {
      
      stroke(49, 102, 33);
      strokeWeight(2);
      line(3000, i+=y, 150, 700);
      
    }
    
    
  
  }

}

if(mousePressed) {
  
    beginShape();
    fill(0);
    ellipse(mouseX, mouseY, circle.ellipseW, circle.ellipseH);
    endShape();
    
}





}
