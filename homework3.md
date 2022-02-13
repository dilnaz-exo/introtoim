# My artwork
<img width="649" alt="Screen Shot 2022-02-13 at 23 05 26" src="https://user-images.githubusercontent.com/90758768/153770603-51cdf857-8ccf-44a5-abfb-2bb53a364b51.png">

https://editor.p5js.org/ayedilnaz/sketches/CJg1XoB1Q

https://user-images.githubusercontent.com/90758768/153771041-e9f1598f-48a8-49cd-9bbb-abfacedf267c.mov



# Sketch that I drew before coding:
![Untitled_Artwork](https://user-images.githubusercontent.com/90758768/153770655-cccb3003-87f7-479e-b13a-ab9f8492c3db.jpg)

# Documentation
## Before starting:
I googled "generative art" and looked at different examples, trying to understand how they were coded and what was the process "behind the scenes". After looking
at different examples, I realized that I would like to code something bright and colorful, and then came to the idea of making flowers as an artwork. After sketching,
I also realized that the Valentines Day is soon, so I decided to randomly put hearts on the background just to give it a more "romantic" look.

## Process:
I think so far Object Oriented Programming and functions is my favorite topic, because I feel like so many things can be done using those. I felt really motivated
to start actually coding, and because I feel like I understood the material during the class, I didn't face many difficulties. However, what was a bit confusing to
me is to locate the flower stems the way I tried to place them. So that there's going to be stems in the center and a bit rotated stems on the left and the right.
At first I thought of doing separate classes for stems on the right and left, but then decided to use if and else to place them differently from the stems on the center.
I also really liked to play around with moving heart shapes.

## What I would like to become better at:
I want to start using different coding pieces intuitively without looking at the sketches that were done during the class. Currently, I'm becoming better at logically
writing code, but sometimes it gets hard for me to immediately know what to write.

## My code:
// variables for the stems
let stem = [];
let noStem = 12;
// variables for the flowers (ellipses)
let flowers = [];
let noFlowers = 130;
// variables for the hearts
let hearts = [];
let noHearts = 15;

function setup() {
  createCanvas(650, 650);
  angleMode(DEGREES);
  for (let i = 0; i < noStem; i++) {
    // stems that between 3<=i<10 should be located in the center
    if (i >= 3 && i < 10) { 
      // xPos is chosen so that there is distance between each stem, and they don't overlap
      let xPos = i * 40 + 90;
      let yPos = 390;
      stem[i] = new centerStem(xPos, yPos, 41, 140, 34);
    } else { // location for the rest of the stems
      let xPos = i * 80;
      let yPos = 390;
      stem[i] = new centerStem(xPos, yPos, 41, 140, 34);
    }
  }

  // Flowers need to be randomly placed:
  for (let i = 0; i < noFlowers; i++) {
    let xPos = random(0, width);
    let yPos = random(100, height / 2 + 100);
    flowers[i] = new flower(
      xPos,
      yPos,
      random(200, 255),
      random(0, 16),
      random(0, 200)
    );
  }
// Hearts need to be randomly placed:
  for (let i = 0; i < noHearts; i++) {
    let xPos = random(0, width);
    let yPos = random(0, height);
    hearts[i] = new Heart(
      xPos,
      yPos,
      random(0, 255),
      random(0, 255),
      random(0, 255)
    );
  }
}

function draw() {
  background(245, 255, 138, 20);
  for (let i = 0; i < stem.length; i++) {
    if (i < 3) {
      // to make the stems when i<3 rotated to the left
      push();
      translate(100, 400);
      fill(41, 140, 34);
      rotate(-30);
      arc(-60, 0, 50, 650, 0, 90); // i = 0
      rotate(20);
      arc(30, 0, 50, 650, 0, 90); // i = 1
      rotate(0);
      arc(60, 0, 50, 650, 0, 90); // i = 2
      pop();
    } else if (i >= 3 && i < 10) {
      stem[i].drawStem(); // stems to be drawn in the center
    } else {
      // 3 stems on the right to be rotated to the right
      push();
      translate(600, 400);
      fill(41, 140, 34);
      rotate(20);
      arc(-80, 20, 50, 650, 0, 90); // i = 10
      rotate(10);
      arc(-20, 10, 50, 650, 0, 90); // i = 11
      rotate(0);
      arc(0, 0, 50, 650, 0, 90); // i = 12
      pop();
    }
  }

  for (let i = 0; i < flowers.length; i++) {
    flowers[i].drawFlower();
  }
  
  for (let i = 0; i < hearts.length; i++){
    hearts[i].drawHeart();
    hearts[i].moveHeart();
  }
}

class centerStem {
  constructor(xPos, yPos, r, g, b) {
    this.x = xPos;
    this.y = yPos;
    this.color = color(r, g, b);
  }

  drawStem() {
    fill(this.color);
    arc(this.x, this.y, 50, 550, 0, 90);
  }
}

class flower {
  constructor(xPos, yPos, r, g, b) {
    this.x = xPos;
    this.y = yPos;
    this.color = color(r, g, b);
  }

  drawFlower() {
    noStroke();
    fill(this.color);
    ellipse(this.x, this.y, 45, 45);
  }
}

class Heart {
  constructor(xPos, yPos, r, g, b) {
    this.x = xPos;
    this.y = yPos;
    this.color = color(r, g, b);
    this.speed = random(1, 5);
  }

  drawHeart() {
    stroke(255, 0, 0);
    fill(this.color);
    arc(this.x, this.y, 15, 15, PI, 0);
    arc(this.x + 15, this.y, 15, 15, PI, 0);
    triangle(this.x - 7, this.y, this.x + 23, this.y, this.x + 8, this.y + 14);
  }

  moveHeart() {
    this.x = this.x + this.speed;
  }
}
