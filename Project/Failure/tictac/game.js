alert("yay!!");
let boxes=document.querySelectorAll(".box");
let reset=document.querySelector("#reset");
let nwgm=document.querySelector("#newgm");
let msg=document.querySelector("#message");
let container=document.querySelector(".messagecontainer");

let turn0=true;
const win=[
    [0,1,2],[3,4,5],[6,7,8],
    [0,3,6],[1,4,7],[2,5,8],
    [0,4,8],[2,4,6]
];

rest=()=>{
    turn0=true;
    enblebtn();
    container.classList.add("hide");
}

dsblebtn=()=>{
    for(box of boxes){
        box.disabled=true;
    }
}
enblebtn=()=>{
    for(box of boxes){
        box.disabled=false;
        box.innerText="";
    }
}

boxes.forEach((box)=>{
    box.addEventListener("click",()=>{
        console.log("yes");
        if(turn0){
            box.innerText="O";
            turn0=false;
        }
        else{
            box.innerText="X";
            turn0=true;
        }
        box.disabled=true;
        i=check();
    });
});

winner=(pos1)=>{
    msg.innerText=`winer is player with ${pos1} symbol`;
    container.classList.remove("hide");
    dsblebtn();
}

const check=()=>{
    for(let pattern of win){
        let pos1=boxes[pattern[0]].innerText;
        let pos2=boxes[pattern[1]].innerText;
        let pos3=boxes[pattern[2]].innerText;
        if(pos1!="" && pos2!="" && pos3!=""){
        if(pos1==pos2 && pos2==pos3){
            winner(pos1);
        }}
    }
}

reset.addEventListener("click",rest);
newgm.addEventListener("click",rest);
