#ifndef _SM64_SURFACE_COLLISION_H
#define _SM64_SURFACE_COLLISION_H


struct WallCollisionData
{
    /*0x00*/ f32 x, y, z;
    /*0x0C*/ f32 offsetY;
    /*0x10*/ f32 radius;
    /*0x14*/ s16 unk14;
    /*0x16*/ s16 numWalls;
    /*0x18*/ struct Surface *walls[4];
};

// extern s16 gNumFindFloorCalls, gNumFindCeilCalls, gNumFindWallCalls;
// extern s16 gFindFloorIncludeSurface0012;
// extern s32 gNumFindFloorMisses;
// extern s16 *gWaterRegions;
// extern s32 gSurfaceNodesAllocated;
// extern s32 gNumStaticSurfaceNodes;
// extern s32 gNumStaticSurfaces;
// extern s32 gSurfacesAllocated;

s32 resolve_wall_collisions(f32 *xPtr, f32 *yPtr, f32 *zPtr, f32 offsetY, f32 radius);
s32 find_wall_collisions(struct WallCollisionData *colData);
f32 find_ceil(f32 posX, f32 posY, f32 posZ, struct Surface **pceil);
f32 func_803814B8(f32 xPos, f32 yPos, f32 zPos, f32 **sp2C);
f32 find_floor_height(f32 x, f32 y, f32 z);
f32 find_floor(f32 xPos, f32 yPos, f32 zPos, struct Surface **pfloor);
f32 find_water_level(f32 x, f32 z);
f32 func_80381D3C(f32 x, f32 z);
void debug_surface_list_info(f32 xPos, f32 zPos);

s32 check_floor_unit_square(struct Surface *surf, s32 x, s32 z);
f32 compute_floor_height(struct Surface *surf, s32 x, s32 z);


#endif /* _SURFACE_COLLISION_H */
