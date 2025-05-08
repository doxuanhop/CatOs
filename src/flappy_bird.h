// Flappy Bird
#define BIRD_START_X 40
#define BIRD_SIZE 16
#define GRAVITY 0.2
#define JUMP_FORCE -2
#define PIPE_WIDTH 8
#define PIPE_GAP 35
int PIPE_SPACING = 55;

float birdY, birdVelocity;
uint8_t pipePositions[3];
uint8_t pipeHeights[3];
bool pipePassed[3];
uint16_t score;
bool gameOver;
uint32_t pipeTimer;
bool birdFrame;

