VAR player_name = "Andres"
CONST NPC_name = "Professor Ian"

-> Normal

=== Normal ===
O, hello {player_name}! You looking good today!

->END

=== HouseScene ===
#speaker: {NPC_name}
Pssst... psst... {player_name}!

{player_name}!!! 

#scene: continue

Oops, sorry, I woke you in the middle of the night.

I need you to come here to the deep, dark forest. I've deciphered the ancient letters engraved on the stone. I need you to join me before the sun rises. It's urgent, and we don't have much time.

#scene: continue
->END