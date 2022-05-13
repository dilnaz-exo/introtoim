## Video Game: International Road Trip

### A little background:
Since the idea of our game initially involved a "car moving" aspect for that, we explored different options of making this game as engaging and fun as
possible for the user. We were thinking of only making a "traveling" or "sightseeing" kind of game where the background scenery changes according to the
time change/speed or anything like that. There, we stopped on the sightseeing idea thinking it would be very interesting.

### Hence, our idea in three parts:
- Driving and controlling a car
A user will be able to control the car both in real life and in the game just by using the arrows (up, left, right, down) which adds up to the overall
experience of having a 100% user-engaging game.
- Thinking of countries:
We realized that it's going to be very interesting to add different cities and countries, while also adding the pictures of countries' most remarkable
places. Thus, we decided to choose 3 countries - travel destinations where the user can go - France, Italy and Japan.
- Adding some spice:
Adding a sightseeing experience to make the game feel more enjoyable.

### After starting the code, I had a small question to myself: what if I add some obstacles to the game so that the experience becomes more interesting? It must be really boring to just drive a car without anything exciting to that.
This is what the game looked like prior adding all the obstacles:
<img width="589" alt="Screen Shot 2022-05-13 at 20 59 03" src="https://user-images.githubusercontent.com/90758768/168332460-3ce4f453-6113-4b36-a8c6-b7042ac86d75.png">
It's definitely not the most appealing game, which made me think of the ways to make it more fun and exciting for the users to play it.
### first thing I thought of: making people (specifically, elder people) cross the road so that the car would need to avoid them.
### second thing: adding benches on the road so the user should drive the way to not crash into those benches randomly placed on the road.
To do that, I created two different classes: a separate class for people and another class for benches:
<img width="511" alt="Screen Shot 2022-05-13 at 21 02 17" src="https://user-images.githubusercontent.com/90758768/168332931-42001fe1-9df3-473a-80fb-d5732615246d.png">
<img width="529" alt="Screen Shot 2022-05-13 at 21 02 58" src="https://user-images.githubusercontent.com/90758768/168333017-2bbc3cf1-b7ba-4d0e-9362-05e1d92bd0a3.png">

### as a result, this is how the game started looking like:
<img width="1440" alt="Screen Shot 2022-05-09 at 12 33 03" src="https://user-images.githubusercontent.com/90758768/168333409-0fc3877f-babc-41d1-a29c-0220328d0ad1.png">

However, after running the code and trying to play it myself, I realized that the decision to put obstacles in those particular ways were lacking some logic to it. For example, why would grandpas walk down the road full of cars? Or why would someone place benches and trees in the middle of the road?
I know that even though game developers can be as creative in their games as possible, I still find it important to keep some logic in mind. That's why I decided to develop my idea of the obstacles and put it in a different level:
First of all, I decided to make 2 horizontal crosswalks on the roadso the grandpas will have to cross them. Here, I had some difficulties: I didn't know how to divide one class into two different constrains. For example, having half of the elder people cross just one crosswalk (constrained by particular heights) and another half of them cross another crosswalk (constrained by other values of height). 
After that, I just decided to do this: in the setup function, I just divided the class into two and assigned to different constrained and randomized heights to the same class.
<img width="500" alt="Screen Shot 2022-05-13 at 21 14 31" src="https://user-images.githubusercontent.com/90758768/168334629-4ded33c7-47a0-47c8-97a9-5059a629fc1e.png">

Instead of benches on the road, I decided to add stop signs and a traffic light which, truly, looks more logical to actually be on the road.

<img width="180" alt="Screen Shot 2022-05-13 at 21 16 25" src="https://user-images.githubusercontent.com/90758768/168334922-8ef9ebf5-7dac-474e-adf2-928a17715707.png">

## Problems faced:
### Obstacles:
When the car touches any of the obstacles, it disappears not just from one country’s screen, but from all countries, because it’s one class. For example:
<img width="507" alt="Screen Shot 2022-05-13 at 21 51 09" src="https://user-images.githubusercontent.com/90758768/168339963-bac5b02f-efe3-4a5a-ba9d-46e2fd4c3225.png">
Here, the one obstacle will go away from all other screens if you hit it in one gamescreen.

### Win/lose screen:
When you complete the journey or lose by getting too many fines, there should be a win/lost screen. But when I put it, all the elements like obstacles stay on screen. 

![WhatsApp Image 2022-05-09 at 3 56 42 PM](https://user-images.githubusercontent.com/90758768/168340598-1978f2cd-9c81-4b86-bdd7-ca6a6770561e.jpeg)

### Design
It was a bit challenging for me to make the design prettier. I’ve never been a fan of car-related games, so I didn’t know what to add.

Here's how the design turned out:
# Italy Screen
<img width="793" alt="Screen Shot 2022-05-09 at 15 54 29" src="https://user-images.githubusercontent.com/90758768/168336327-9ee02ddd-fa5e-41c6-9407-7bf93c043aac.png">

# France Screen
<img width="798" alt="Screen Shot 2022-05-09 at 15 54 48" src="https://user-images.githubusercontent.com/90758768/168336365-54401390-be78-4dbc-ae5e-d69ba61bb34b.png">

# Japan Screen
<img width="797" alt="Screen Shot 2022-05-09 at 15 54 59" src="https://user-images.githubusercontent.com/90758768/168336392-b8e26010-993c-47b7-b4cc-98a5227447c4.png">

## How I solved the problems: Obstacles:
Regarding the obstacles, I decided to leave it as it is. However, when the user goes through all the countries and restarts the game, I just increased the number of obstacles, so that the level gets higher. This way I used the "it's a feature, not a bug" mentality and it actually turned out great! When other people were playing, they particualrly enjoyed that the level was increasing every time they restarted the game. Here's a picture of my friend playing our game:

![IMG_2084](https://user-images.githubusercontent.com/90758768/168342010-9963ea94-55d4-4365-9087-3c995d7cb2c8.jpg)

## Win/lose screen:
I decided to make separate gamescreens for the "lose" and "win" screens. Here's the code for the gameScreen = 4(win screen):
<img width="581" alt="Screen Shot 2022-05-13 at 22 11 42" src="https://user-images.githubusercontent.com/90758768/168342808-7ad05c3a-b27d-49a9-972b-0a9467a2f1b9.png">

Here's the code for the gameScreen = 5 (lose screen):
<img width="588" alt="Screen Shot 2022-05-13 at 22 12 29" src="https://user-images.githubusercontent.com/90758768/168342908-1211e6c6-b75a-41d9-aac7-b551f24e1b7a.png">

At the end, I could successfully solve all the issues and connect the arduino part to the p5 game.

# Arduino:
# Steps on the project:
The project consists of 2 part: Arduino and p5.js. We decided to move together with these 2 parts but by steps. 
* Firstly, we connected motors to Arduino and made sure it worked. However, not everything worked out. The B part of the motor driver did not work. It turned out that the problem was with the brideboard. For some reason ot was not warking, so moving the wires and the motor driver to another part of the board helped.
* Secondly, the main idea of our project is to pass the information from p5.js to Arduino in order to control the car's move. As it will be controlled by the arrows, we decided to use the cases: if up, down, right or left arrow is pressed. If the up_arrow is pressed the car is supposed to move constantly, the down_arrow - reverse, back, the right_arrow - turn right, the left - left. In our plans the the side arrows are pressed only one side of the wheels move abd that is why the car is able to turn. However, it is not for sure yet, we will see how it works when we connect the car completely to Arduino and make aal the wheel move forwards and backwards.
* While using cases we cannot impact the car's speed, but maybe in the end we will change the cases to the list that will be passed to arduino in order to control it. 
* We connected 4 motors and it worked, so we continued with cutting a part of the wood, about 20 cm to 15 cm and marked where to put the motors.

![1](https://github.com/lizadat/Intro_to_IM/blob/5a4e1fe8633b72a99139593ed5e3933d52342d9a/Final_Project/1.jpeg)

* After that we glued the rest of the motors with the hot glue and put the wheels on it. It was a technical part, physical. We made sure it was all connected and we also placed the arduino and the brideboards on the car. It is all temporary, as we plan to solder and make it permanent.

![2](https://github.com/lizadat/Intro_to_IM/blob/9b3248dc2e1ed7584087e82ecc2ff30a957f56d3/Final_Project/2.jpeg)

* For now with our code only 1 wheel was working, but we were able to control it from p5.js. Also there was used the function keyPressed(), but it was one time thing: is pressed - it runs once and stops in a few seconds. The function should probably be changed to keyIsPressed().
* Also we need to make sure that all 4 wheels are controlled.
* Unfortunately, when we try to run the code, the information is passed from p5.js tp Arduino, but only 1 wheel is working. We checked the code and all the pins, but it looks like there is a problem with Motor Driver. When I tried to check it with voltage meter, I discovered that only A part of the second Motor Driver is working. 
![problem1](https://github.com/lizadat/Intro_to_IM/blob/0972802884745a68c95f42769300e80b88bc03ef/Final_Project/problem1.jpeg)

# Progress
* All previous problems were solved. Only 1 wheel was working because passing the speed in range 0-255 was not working. The lowest value I found that was running - 128. Unfortunately, we will not be able to control the speed, it will be stable.
* So now all 4 wheels are working. I made it go forward if the up_arrow is pressed, reverse is down_arrow, right - right, left - left. The information is sent from p5 in numbers 0, 1, 2, 3 and 4 and in Arduino it is divided into cases. For each case there is a specific code for the motors.
* I tried to connect ultrasonic sensor. However, here is the issue: there are not enough pins. Every motors requires 3 pins = 12 pins for all. And we need 2 more pins for the sensor. Only 0 and 1 are left but the sensor does not seemd to work with it. Here is the progress that we have so far with hardware.
 
[Video](https://youtu.be/RvP7uVFEp7E)

* I also created a communication between Arduino and p5.js, but it is useless for now, untill we figure out what to do with needed pins.

# Continue
* The solution for the lack of the pins is Arduino Mega, which we were able to connect. It appears that some of the pins are not PWM, so I took some time to figure out what was wrong and how to fix it. As a result, all 4 wheels were working properly and were controled from p5.js.
![3](https://github.com/lizadat/Intro_to_IM/blob/1608f4f99de1b0609a9e65fb9638412d44306fd9/Final_Project/3.jpeg)
* Another challenge came when we tried to connect ultrasonic sensor. When it is connected to Arduino, the wheels are turning, however they are lagging and do not stop. It is not working properly.
* Unfortunately, we had to quit our idea with the ultrasonic sensor. Maybe if we had more time we would make it work.


# XBee Connection
* In order to make the car move independently, without the wire behind it we decided to use XBee communication.
* For that XBee Shield, Antenas and explorer were borrowed from the IM lab.
* As a few people were working in the lab with the wireless connection and some of the hardware was not working properly we had a lot of issues that took plenty of time on our way in making the project.
* As a result: before connecting we had to make sure that antenas and explorer work; we had to change the antenas PAN ID in order to connect only to our specific antena; resolder XBee shield so it is working with Arduino Mega:

![4](https://github.com/lizadat/Intro_to_IM/blob/5608421440bf9964ce2617a7f0ce48ad02e0318e/Final_Project/4.jpeg)

* We had to solder pins 2 with 10 and 3 with 11, so that Arduino Mega will be properly connected to XBee shield.
* As a result our car, with Arduino Mega, Xbee connection looked like this:

![5](https://github.com/lizadat/Intro_to_IM/blob/5608421440bf9964ce2617a7f0ce48ad02e0318e/Final_Project/4.jpeg)


Another file:
# Final Look
* We finished our project by making a rapping for our car. For that we used a cardboard + paper, printed in red so that our car looked red as in the video game. 
* Here is how it looked liked in the end:

![6](https://github.com/lizadat/Intro_to_IM/blob/1ecf91c3932a092285b9a5308e4bde9500a78a2b/Final_Project/6.jpeg)

# Presentation in class
* For the presentation in class we had around 7 minutes. We prepared our presentation and also showed how it worked. 
The powerpoint presentation can be found [here](https://docs.google.com/presentation/d/142WFYLCXTMJJ5VbgBYLytWZnr0qSKPl156OLqVjfMVs/edit?usp=sharing)

![7](https://github.com/lizadat/Intro_to_IM/blob/1ecf91c3932a092285b9a5308e4bde9500a78a2b/Final_Project/7.jpeg)
![8](https://github.com/lizadat/Intro_to_IM/blob/1ecf91c3932a092285b9a5308e4bde9500a78a2b/Final_Project/8.jpeg)

* There is also a short video of how we presented it in class:
[Video](https://youtu.be/Dv4H5d7utEI)
* Fortunately, we were able to complete our project before the presentation and nothing went wrong.


# The Presentation Day
* The showcase happened during our class time. It took about 2 mins to set up: turn on the computer, open the code for the game, connect arduino mega to power, which was the powerbank in our case and pair it up with the computer.
* Here is a picture of people, who played our game:

![p1](https://github.com/lizadat/Intro_to_IM/blob/1ecf91c3932a092285b9a5308e4bde9500a78a2b/Final_Project/p1.jpeg)
![p2](https://github.com/lizadat/Intro_to_IM/blob/1ecf91c3932a092285b9a5308e4bde9500a78a2b/Final_Project/p2.jpeg)


# My personal feelings about the project: (Dilnaz)
Professor, I would like to express my sincere gratitude to you and to this course. Before taking Intro to IM, i took Intro to CS, which was easy at the beginning, but after a while, it became really hard for me to do even the simplest codes. I kept forgetting the logic of the code and everything. This time, when I was making the game and was relying completely on my understanding of OOP, classes, functions and everything, I realized that I actually learned something particularly useful to myself. I learned how to write simple to more complicated codes which also makes me really proud of myself. During this project, whenever I had problems, I didn't run to google or to professor, I just tried to look at the problem from different angles. I loved the sense of project-based thinking that this project gave me.

![b8a75a64-f601-404d-a1ac-54346a37b0aa](https://user-images.githubusercontent.com/90758768/168345078-d903186a-479e-4e50-bf7f-e8e822169043.JPG)

