//AUTOGENERATED FILE FROM png2asset
#ifndef METASPRITE_Bricks_H
#define METASPRITE_Bricks_H

#include <stdint.h>
#include <gbdk/platform.h>
#include <gbdk/metasprites.h>

#define Bricks_TILE_ORIGIN 0
#define Bricks_TILE_W 8
#define Bricks_TILE_H 8
#define Bricks_WIDTH 32
#define Bricks_HEIGHT 40
#define Bricks_TILE_COUNT 17
#define Bricks_PALETTE_COUNT 1
#define Bricks_COLORS_PER_PALETTE 4
#define Bricks_TOTAL_COLORS 4
#define Bricks_MAP_ATTRIBUTES Bricks_map_attributes
#define Bricks_MAP_ATTRIBUTES_WIDTH 4
#define Bricks_MAP_ATTRIBUTES_HEIGHT 5
#define Bricks_MAP_ATTRIBUTES_PACKED_WIDTH 4
#define Bricks_MAP_ATTRIBUTES_PACKED_HEIGHT 5

BANKREF_EXTERN(Bricks)

extern const palette_color_t Bricks_palettes[4];
extern const uint8_t Bricks_tiles[272];

extern const unsigned char Bricks_map[20];
extern const unsigned char Bricks_map_attributes[20];

#endif
