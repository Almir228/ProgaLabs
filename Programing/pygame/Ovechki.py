import pygame
from pygame.draw import *
from random import *

WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GRAY = (125, 125, 125)
LIGHT_BLUE = (64, 128, 255)
GREEN = (0, 200, 64)
YELLOW = (225, 225, 0)
PINK = (230, 50, 230)
RED = (255, 0, 0)
BROWN = (100, 40, 0)

COLOR = [WHITE, GREEN, GRAY, LIGHT_BLUE, YELLOW, PINK]

pygame.init()

FPS = 30
screen = pygame.display.set_mode((794, 1123))
screen.fill(LIGHT_BLUE)


def rog(x0, y0, size):
    pygame.draw.polygon(screen, PINK, [(x0 + 25 * size, y0 + 10 * size),
                                       (x0 + 45 * size, y0 + 10 * size),
                                       (x0 + 35 * size, y0 - 30 * size)])
    pygame.draw.ellipse(screen, WHITE, (x0, y0, 70 * size, 140 * size))
    for i in range(20):
        pygame.draw.ellipse(screen, PINK, (x0 - i * size, y0 + 5 * i * size,
                                           randint(30 * size, 50 * size),
                                           randint(30 * size, 50 * size)))


def odin(x0, y0, size):
    pygame.draw.ellipse(screen, WHITE, (x0, y0, 200 * size, 100 * size))
    pygame.draw.rect(screen, WHITE, (x0 + 20 * size, y0 + 50 * size, 10 * size, 100 * size))
    pygame.draw.rect(screen, WHITE, (x0 + 40 * size, y0 + 40 * size, 10 * size, 100 * size))
    pygame.draw.rect(screen, WHITE, (x0 + 140 * size, y0 + 50 * size, 10 * size, 100 * size))
    pygame.draw.rect(screen, WHITE, (x0 + 160 * size, y0 + 40 * size, 10 * size, 100 * size))
    pygame.draw.ellipse(screen, WHITE, (x0 + 160 * size, y0 - 50 * size, 80 * size, 40 * size))
    rog(x0 + 140 * size, y0 - 70 * size, size)
    pygame.draw.circle(screen, GREEN, (x0 + 180 * size, y0 - 50 * size), 7 * size)
    pygame.draw.circle(screen, BLACK, (x0 + 184 * size, y0 - 50 * size), 2 * size)
    for i in range(20):
        pygame.draw.ellipse(screen, LIGHT_BLUE, (x0 - (i + 20) * size, y0 + (5 * i + 20) * size,
                                                 randint(30 * size, 50 * size),
                                                 randint(30 * size, 50 * size)))

def tree(x0, y0, size):
    pygame.draw.rect(screen, BROWN, (x0, y0, 20 * size, 150 * size))
    pygame.draw.ellipse(screen, GREEN, (x0 - 90 * size, y0 - 50 * size, 200 * size, 100 * size))
    pygame.draw.ellipse(screen, GREEN, (x0 - 40 * size, y0 - 100 * size, 100 * size, 150 * size))
    pygame.draw.circle(screen, RED, (x0 + 50 * size, y0 - 50 * size), randint(5 * size, 10 * size))
    pygame.draw.circle(screen, RED, (x0 + 30 * size, y0 - 30 * size), randint(5 * size, 10 * size))
    pygame.draw.circle(screen, RED, (x0, y0 - 70 * size), randint(5 * size, 10 * size))
    pygame.draw.circle(screen, RED, (x0 - 10 * size, y0 - 10 * size), randint(5 * size, 10 * size))
    pygame.draw.circle(screen, RED, (x0 - 40 * size, y0 + 10 * size), randint(5 * size, 10 * size))
    pygame.draw.circle(screen, RED, (x0 + 40 * size, y0 + 20 * size), randint(5 * size, 10 * size))
    pygame.draw.circle(screen, RED, (x0 + 60 * size, y0 * size), randint(5 * size, 10 * size))


def peizazh():
    pygame.draw.rect(screen, GREEN, (0, 500, 2*794, 1123/2))



peizazh()
odin(400, 400, 1)
tree(100, 400, 2)
pygame.display.update()
clock = pygame.time.Clock()
finished = False

while not finished:
    clock.tick(FPS)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            finished = True

pygame.quit()
