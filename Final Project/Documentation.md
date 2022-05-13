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
