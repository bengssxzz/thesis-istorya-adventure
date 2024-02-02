# Thesis Istorya Adeventure
*This is a work in progress documetation. Edit it as needed.*
*testing git with github*

## Level Creation

A level is a prefab put inside Chapter folders.

`./ThesisProjectAssets/Scenes/Chapter x/`

### Get a level template

Inside Chapter 1 folder, copy `Chapter1_Template.unity` and then paste it inside the new desired chapter folder.

Rename it to explain the level.

### Editing the World Tilemap

The prefab `World Tilemap` contains the important places to edit the map such as putting its NPCs, tile map, and collision tiles.

#### Collision tiles for map

Under `World Tilemap/Tilemaps`, choose `Tilemap_Collision` to edit the map's collision.

On Unity's Tile Palette, set the Active Tilemap  `Tilemap_Collision` in scene mode. Then open the tileset `Collision Palette`. Select the purple blocks as ink.

Paint parts of the map purple so that they could act like walls that collides with the player.

#### Collision tiles from tileset

IDK.

## SPUM Human sprite

SPUM is used to create a prefab that contains the pixel art and a preset animation. Humanoid sprites can represent most NPCs of the game. 

### SPUM

From the own documentation of SPUM:

> 1. Import this asset from asset store.
> 2. Select SPUM_Manager Ojbect in Scenec and Install Button at Inspector
>    (After installed, you have to check "Assets/Resources/SPUM/SPUM_Sprites" Folder is exist)
> 3. Play SPUM_Scene file at "Assets/SPUM/Scene/SPUM_Scene".
> 4. You can choose part of characters and random choose, and testing animation provided.
> 5. Save prefabs file then saved unit data located at "Assets/Resources/SPUM/SPUM_Units" with unit code name.
> 6. You can using saved prefabs to your game project.
> 7. You can Load saved unit data by load button.
> 8. In load menu, you can delete unit data or choosing editing unit data.
> 9. Loaded unit data set on main editor and you can modifying data and press Edit button to save.
> 10. If it can't load or find Sprite data from Resources folder, you can re-install it with Reset "Reset Resources Data" button at bottom of SPUM_Manager object.

