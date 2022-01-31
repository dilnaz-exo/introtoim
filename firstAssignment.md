# My self portrait:

<img width="497" alt="Screen Shot 2022-01-31 at 11 20 34" src="https://user-images.githubusercontent.com/90758768/151753493-44503097-e50e-4ebe-a839-1a1f9368e128.png">

# Documentation
### My expectations before doing the self-portrait:
- The idea of doing the self-portrait was really interesting for me, because it allows me to be creative while coding, which is always an exciting experience.
Before starting, I was a little anxious about the x, y values of each shape, because I thought that it would take a lot of time for me to actually align equally
each ellipse, line, etc. However, I was very eager to learn.
- I had multiple ideas about which exactly self-portrait I would like to do, and looked through different photos of mine, but since they all were from different angles,
I decided to rely on my own perception of myself.
### Progress:
- As I wrote, I felt a little anxious about coordinates (x,y values of each shape), but then I decided to pick those values according to the mouseX and mouseY.
I just navigated my mouse to the point I would like to put my ellipse and etc, and used print function to see which coordinates those points had. After a while, though,
it became almost intuitive for me to put different x,y values, as I got used to the dimensions of my canvas.
- I found it particularly interesting to play around with arc() shape! Especially to do my brows on the self-portrait. I was very happy when I saw how my right brow
came out just by using one arc(), but things got a bit more difficult when it came to my left brow. As you might already have noticed, the left brow looks kind of
inverted and gives a funny look, and the problem was that I didn't know how to rotate it. I looked at internet resources, and saw some advice, but decided to keep it
that way, because I thought that it makes my portrait look a bit more creative.
- I also loved making the heart shapes for my eyes! It's so interesting that so many things can be done without actually drawing, just by coding at putting coordinates
together.

# My code:
function setup() {
  createCanvas(500, 600);
}

function draw() {
  background(255, 143, 133);
  //hair:
  noStroke();
  fill(43,29,20);
  ellipse(235,210,380,380);
  arc(235,480,450,450,PI,0);
  //head shape:
  stroke(0);
  fill(255, 236, 209);
  rect(160,380,150,110); //neck
  ellipse(235,230,290,370); //head
  //necklace:
  fill(255,215,0);
  ellipse(150,480,30,30);
  ellipse(180,500,30,30);
  ellipse(210,500,30,30);
  ellipse(240,500,30,30);
  ellipse(270,500,30,30);
  ellipse(300,480,30,30);
  fill(165,42,42);
  arc(100,150,200,25,0,PI/2); //left brow
  arc(270,150,200,25,3*PI/2,0); //right brow
  noFill();
  //glasses, left part:
  stroke(0);
  strokeWeight(3.5); //upper part of the glasses is thicker
  line(107,170,230,170);
  strokeWeight(1);
  line(107,170,120,240);
  line(230,170,215,240);
  line(120,240,215,240);
  //glasses, right part:
  strokeWeight(3.5); //upper part of the glasses is thicker
  line(250,170,373,170);
  strokeWeight(1);
  line(250,170,263,240);
  line(373,170,353,240);
  line(263,240,353,240);
  fill(255);
  ellipse(170,200,80,40); //left eye
  ellipse(310,200,80,40); //right eye
  fill(255,0,0);
  noStroke();
  // left eye heart shape:
  arc(162, 196, 15, 15, PI, 0);
  arc(177, 196, 15, 15, PI, 0);
  triangle(155, 196, 185, 196, 170, 210);
  // right eye heart shape:
  arc(302, 196, 15, 15, PI, 0);
  arc(317, 196, 15, 15, PI, 0);
  triangle(295, 196, 325, 196, 310, 210);
  stroke(0);
  noFill();
  arc(235, 270, 50, 40, 0, PI);
  //lips:
  fill(255, 143, 133);
  stroke(255, 91, 77);
  arc(220, 336, 30, 30, PI, 0);
  arc(250, 336, 30, 30, PI, 0);
  arc(235, 330, 80, 40, 0, PI);
  //earrings:
  fill(255,215,0);
  arc(90,300,30,30,2*PI,0);
  arc(380,300,30,30,2*PI,0);
}
