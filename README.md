What Is This?

This mod adds a craftable vehicle toolbench storage item to the game.

Recipe:

Use 60 Nails on 5 Sheet Metal to craft the kit. Use a screwdriver to de-craft the workbench back into a kit.

Storage:

50 slots
1 tire iron
1 tire repair kit
1 gasoline canister
1 car radiator
1 car battery
1 truck battery
1 sledgehammer
2 spark plugs
1 glow plug
6 rags
1 pliers
1 screwdriver
1 wrench
2 spraypaint

Installation Instructions:

Install this mod like any other mod - copy it into your server folder and add it to your mods list. Make sure to copy the .bikey into your server keys if you're not using a server management tool like OmegaManager which does that automatically.

Make sure to merge the types.xml into your server types and adjust the item's lifetime, or the items will despawn on server restart and/or if no players are around. The types.xml file is in the mod folder and listed below.

This mod must be installed on both the server & client.

3D Model Credits:

The 3D models were free on Sketchfab under the CC Attribution license.

Original Bench Model: https://sketchfab.com/3d-models/toolbox-7cbe6ce8acc4422dbdd2c00ae5f6d370
Original Kit Model: https://sketchfab.com/3d-models/cardboard-box-1bcef93a72c74e9683720788716ed9a6

Repack & Source Code:

You can repack this mod if you like, and do anything else you want with it for that matter. The source code is on my GitHub at www.zenarchist.io

Enjoy!







Types.XML:

<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<types>
    <type name="Zen_CarWorkbench">
        <lifetime>2419200</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
    <type name="Zen_CarWorkbenchKit">
        <nominal>2</nominal>
        <lifetime>172800</lifetime>
        <restock>0</restock>
        <min>1</min>
        <quantmin>-1</quantmin>
        <quantmax>-1</quantmax>
        <cost>100</cost>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="0" deloot="0"/>
        <category name="tools" />
        <tag name="floor"/>
        <usage name="Industrial" />
    </type>
</types>
