/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg
*/

#pragma once

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct window_h {
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfEvent event;
}window_t;

typedef struct rpg_h {
    window_t *wind;
}rpg_t;
