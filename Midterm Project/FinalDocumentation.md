# Mikasa Saves the Village

important disclaimer: I spent 40 minutes writing my documentation but everything got deleted so I'm rewriting it

## How Did I Come Up With the Idea:
At first, I wanted to make a game that I used to play in my childhood called "Super Cow", which is a game about a Cow who wanted to save her village and the citizens of that village from bad animals that occupied the whole land. I also wanted to make a game with different characters (protagonists and antagonists), so that there's going to be a little plot in a game. However, this game was based on a character jumping on platforms on a continuous game screen, so I didn't want to copy the entire thing. That's why I decided to integrate the grid that I've learned during the previous classes. Thus, I got an idea of making a maze and still incorporating the idea of a character saving the village. During the actual coding process, however, when I had some issues, I was thinking of giving up on that idea and creating something that would be a bit easier - with an easier idea. However, I reminded myself the true thought behind the idea: it was because of the recent events in the world, when countries are getting occupied and invaded by othe governments and civil people are suffering because of it. So I decided to keep the idea till the end, no matter how hard it would eventually get.

Super Cow game that I was inspired by:

![super-korova-ipad-2](https://user-images.githubusercontent.com/90758768/157747455-6c9025c3-0a3b-4a31-bdd6-cb599da02e62.jpg)

## About the simpler idea that I had - I actually even started working on it
I decided that before making my actual idea come true, I first need to divide my code into several parts: making the objects for my characters, coding my grid, and coding the functions of my character like collecting the coins and so on. Before doing the last part, I realized that I still was a bit unsure about how to use functions in different games, which is why I decided to practice on making a simple snake game:
https://editor.p5js.org/ayedilnaz/sketches/SNoxNxA6I

https://user-images.githubusercontent.com/90758768/157747856-de7e2ed5-ccd5-4458-a2d3-68398fb1df71.mov

## Expectations: sprites
So before actually working on the code, I knew that I wanted to make a game with different animated characters (the huntress, goblins and so on), and even installed all the necessary spritesheets from the website called itch.io . I thought that there will be different actions that my characters will have - idling, running and attacking, which is why I uploaded the sprites for each of those actions. My initial idea was that when the character is not moving it's getting the idle sprite:

![hIdle](https://user-images.githubusercontent.com/90758768/157748385-f04ed364-2080-4c36-ab67-fa4ca8fbb894.png)

when it's moving it's getting the run sprite:

![hRun](https://user-images.githubusercontent.com/90758768/157748438-95a93c2d-689c-4dab-ad51-51454c02aa86.png)

when it's attacking it's getting the run sprite:

![Attack](https://user-images.githubusercontent.com/90758768/157748486-bc028b86-7cd0-47eb-9cc3-0d001ba0a29e.png)

## Problems I faced with these sprites
I realized that I couldn't make a class for my sprites no matter how hard I tried, and I think that the problem was passing all the values and arguments to the objects which is why I kept errors like "object undefined" or "function undefined". This made me really frustrated, but for some time I kept trying to make a class because i thought that the further actions would also depend on that. However, later I decided to work on something that I actually feel comfortable about. Thus, I kept working on my huntress object in the main sketch.js:

<img width="506" alt="Screen Shot 2022-03-11 at 00 29 09" src="https://user-images.githubusercontent.com/90758768/157749125-bea13501-f3f0-405d-bc3f-5df5acf8ffdd.png">

I did all the animations when moving and everything was working nicely. As you can see my character is animated when it's running to different sides.

https://user-images.githubusercontent.com/90758768/157749196-e2043902-0560-4751-b4b5-aa701543c516.mov

However, the problem was that the character was running through the maze blocks, and to fix that issue I used getCurrValue, but it wasn't working for me for various reasons:
1) problems with the grid
2) the fact that i didnt have classes for my objects so i didnt know how to get x and y values for them

That's why I decided to switch from spritesheets to a normal image and make a class with it, because I was much more comfrotable with it.

## Problems with the grid:
I think it was very valuable for me to actually talk to professor about the issue I had with the grid, because my maze was a reactangle, not a square. It was really nice to find a bug in a code, and solving it was even nicer. Something that I actually understood from this issue is that the extensive use of print() function is actually very helpful especially when the code is not giving any errors but it's still not working the way it is expected to.

This is how it looked after professor and I debugged the grid code:

<img width="1000" alt="Screen Shot 2022-03-11 at 00 36 46" src="https://user-images.githubusercontent.com/90758768/157750149-06170020-05da-4944-b0f9-83e621402b92.png">
