var img = document.getElementById("img");
var audio = new Audio();

function executeEmotion(emotion)
{
    randomImg = Math.floor(Math.random() * 10) + 1
    randomAudio = Math.floor(Math.random() * 2) + 1

    img.src = "img/" + emotion + randomImg + ".gif";

    audio.pause();
    audio.src = "audio/" + emotion + randomAudio + ".mp3";
    audio.play();
}

document.body.onkeydown = function(e){
    if (e.keyCode == 49) //1
    {
        e.preventDefault();
        executeEmotion("alegria");
    }

    if (e.keyCode == 50) //2
    {
        e.preventDefault();
        executeEmotion("tristeza");
    }

    if (e.keyCode == 51) //3
    {
        e.preventDefault();
        executeEmotion("felicia");
    }

    if (e.keyCode == 52) //4
    {
        e.preventDefault();
        executeEmotion("raiva");
    }

    if (e.keyCode == 53) //5
    {
        e.preventDefault();
        executeEmotion("nojo");
    }

    if (e.keyCode == 54) //6
    {
        e.preventDefault();
        executeEmotion("amor");
    }
}
