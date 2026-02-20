// typing system message
const text="ACCESS GRANTED";
const el=document.querySelector(".holo");

let i=0;

function type(){
if(i<text.length){
el.textContent=text.substring(0,i+1);
i++;
setTimeout(type,100);
}
}
setTimeout(type,1000);
