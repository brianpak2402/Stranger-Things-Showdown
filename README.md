## Stranger Things Showdown!! 
This mini-game is inspired by the first season of the Netflix show, Stranger Things. 
Here, you will be able to choose from seven different characters to compete in a simple game of rock, paper, scissors!

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
