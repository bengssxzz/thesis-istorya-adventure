INCLUDE _global.ink

CONST NPC_name = "Professor Ian"


VAR player_holding_something = true
VAR player_holding_name = "ObjectTest1"


->OnPhone
{player_holding_something: -> Player_Hold_Items | -> NormalConversation}


===TestingKnot===
This is testing knot!!
->DONE

//This will be always added to NPC dialog
===NormalConversation=== 
How you doing {player_name}?

...

Good to know.
->END

//This will be always added to NPC dialog
=== Player_Hold_Items ===
What do you got there {player_name}? 

{shuffle:
- WHAAaaAAaaAA!!..... <>
- Whe~.. Whe~.. WHAAAaaaAAAA!! Where did you get these?!
- WHAAAT!!... <>
}

->Artifacts_I_Know(player_holding_name)
->END

//This will be always added to NPC dialog
=== Artifacts_I_Know(artifacts_name) ===
{ artifacts_name:
    - "ObjectTest1": 
        This is test artifact object 1

    - "ObjectTest2":
        This is test artifact object 2

    - else:
        What is this? I don't know what this is.
        ->DONE
}

{shuffle: //Show one at shuffle
- Wow! Where did you get these? You know this is so very rare nowaday?
- -> TestingKnot 
- Wow! You really are amazing {player_name}!
}


~player_holding_name = ""
-> END



=== OnPhone ===
#speaker: {NPC_name}
HEY {player_name}!!! 

Sorry I wake you up! 

I-I-I-I NEED YOU RIGHT NOW! I have a good news about our loooooong time project! 

Come, Meet me at my lab!!! 
-> END

=== OnEnterLab ===
#speaker: {NPC_name}
There you are, partner! I'm glad you came this late at night. 

Come here, I want to show you something..
-> END

=== OnLaboratorySpeak ===
#speaker: {NPC_name}
Look at this, Andres! Our project is finally working! After many years of hard work and numerous challenges, our Dimensional Portal Watch is now operational! 

We can now travel to another dimension, Andres! I'm so excited to try our machine. Put it on, Andres!

This project of ours requires a strong host because it drains the host's energy to create a portal. Since I'm already old, this Portal Watch might not work for me anymore. So, you're the only one who can wear it to test it out.
-> END

=== OnLaboratoryTesting ===
#speaker: {NPC_name}
Okay, Andres, I made a few changes to the system you created. But don't worry, I promise I only made a few adjustments!

So, you need to press 'Initialize host' to charge the machine. The machine needs to be at 100% charge to generate a portal.

And... 

You might feel a bit tired because the machine requires your energy.

So, when you start feeling like you're about to collapse, just press 'Cancel charge.' 

Then, we'll have to wait for another year...

or another many years...

or another many, many years.

...

That's the spirit, Andres! I know you're strong, so the machine will reach 100% charge.

Now, touch the wall with the machine because it will create the portal on the wall.

And press 'Generate Portal,' and...

Good luck, Partner.
-> END

=== OnLaboratoryTriggerTest ===
#speaker: {NPC_name}
Oh, God!

You did it, Andres!

You really did it, Andres! We can now travel to another dimension!

Let's jump in 3...

2... 

//The idea here is ink can start the timeline and unity can pause the timeline
... #timeline: start

Oh! I forgot to bring something!
->END

=== OnLaboratoryWorried ===
#speaker: {NPC_name}
Andres?!

Oh... No....!!
->END















