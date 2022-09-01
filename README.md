## Stranger Things Showdown!! 
This mini-game is inspired by the first season of the Netflix show, Stranger Things. 
Here, you will be able to choose from seven different characters to compete in a simple game of rock, paper, scissors!

![enter image description here](https://lh3.googleusercontent.com/XeOtyWIzW1i1lwf70AGcaeT0tBdfCe9fNV8sp92bmk1OuHUcM5oSqu1tJx4kHEbJw2JYg8Ib2c9WNigs3df8hflYnVlp4-qFwjf5XJhZUB189c4zF4v0vVl_dbnQ5ygxkwUpzWPKN9YuDfrei6mP5dXmy1qoKjRLoqE2tedJspKuh6kH4yLiY4_jd77CuYARz5LH-Urahgf3UyO3CWAd8u2NP89zCOJEkMx7CvZ6LjuYqbK1mqDHMramDm7vp2wno0giNZf2rBJ08As468jRJI-nP7jbEmwVrehBIs07ULl1VznzmxtEBR9STbixWIWsFLqBo3wvl4544IHYNDlE407u6GF1lkqzQ7_xKnC9G1MCgHxBxOUmwZU5HQliByqaKjZj72kp69K_lUmA73xJS-T9830B14G9pMwZrmVqBiu1WFgAARIZW6avrbspNfHnPFHmQXjDd1GVihbePRFLGY5dkbTfP03HtTVf3QgHHdwIgJ7JYzwk9ODpmKvDU4pHfCl67Ez0IQDyEmHzuFazFxg2SK0uLOe6DQ7yIa9cD22Lu8-nfFUSSfpVzNAx7g9c4XE3ahTOclh7cdoDy7tGfIiN0WYmr6PZ_YDdoit_ioinPt8EPq2iFe54Ic1vli6kkST6Mblaair5hggJJtbPjcn5To4sp2RUllE4SKWcLormJQCw4J3Eb2y2WLVz14B_4Bj_BCBk_fQEtv4SQkMrpBESg0Gi4cnCR7xkpq3WOdFXcFmUlpMBvLmqL8kXaR0=w1786-h1346-no?authuser=0)

### Credits
The CS 2110 Teaching Assistants at the Georgia Institute of Technology are credited with developing the cs2110docker.sh script as well as the backbone code for this project, which includes Makefile, and other files contained in this repository. Any additions or adjustments to this code is my work only.

## Configuration
 - Click this [link](https://docs.docker.com/get-docker/) and follow the download instructions for your specific device.
 - Once you have downloaded Docker, make sure to have it running in your background. Clone this repository to your device, and navigate to the root directory of this project with the following commands.
```bash
$ git clone git@github.com:brianpak2402/Stranger-Things-Showdown.git
$ cd Stranger-Things-Showdown
```
Now, we can run the CS 2110 Docker image. The `cs2110docker.sh` script has been included in this repository to help this process. Steps 3-5 specify how you could set up the docker image for macOS, Windows, and Linux devices, respectively. 

 -  For macOS devices, you need to give proper permission to this file by entering this command.
```bash
$ sudo chmod +x cs2110docker.sh
```
Once you’ve set the permissions (which you only have to do on the first run), you can run the script using the following command:
```bash
$ ./cs2110docker.sh
```
 - For Windows devices, open Git Bash (open Start Menu and search for “Git Bash”), use cd to navigate to the directory in which you put the `cs2110docker.sh` script, and run
```bash
$ ./cs2110docker.sh
```
 - For Linux devices, the installation process should have set the Docker daemon to start on boot, so you don’t need to worry about launching it manually. Before you can run the script, you have to set up the user group for Docker. Open a terminal window and run the following commands:
```bash
$ sudo groupadd docker
$ sudo usermod -aG docker $USER
```
Once you’ve created the user group (which you only have to do on the first run), you can run the script using the following command:
```bash
$ ./cs2110docker.sh
```
 - If you have properly set up Docker and ran the script without error, the script should respond with a URL: `http://127.0.0.1:6901/vnc.html`. Open up your browser and go to the URL.
 - Once you have entered the URL, click connect, and click to the **Terminal Emulator** app. Now, navigate to the project using the following command. 
```bash
$  cd host/
```
 - A Makefile has been provided to manage this project. To compile and run the project, enter the following command:
```bash
$ make mgba
```
The opening screen for the game should now appear on your screen!
 - After you are done playing with this game, feel free to clean up any compiled objects with this command:
```bash
$ make clean
```   
## Gameplay
### Controls
Since this game was designed for the Gameboy Advance, button inputs prompted from this game will be different from the keyboard inputs on your device. The following is a key-button mapping between the inputs on your device and the Gameboy Advance.
 - `Start`/`Enter`: this corresponds to the Enter key on your keyboard
 - `Restart`: backspace key, which you can use to refresh the game at any time.
 - `A`: this corresponds to the Z key on your keyboard
 - All directional buttons (left, right, up, down) correspond to the directional keys on your keyboard.
 
Enjoy the game!
