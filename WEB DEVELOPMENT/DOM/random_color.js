console.log("JAI MEHER BABA");

let boxes = document.querySelector(".head").children;

function getrandomcolor() {
  let var1 = Math.ceil(0 + Math.random() * 255);
  let var2 = Math.ceil(0 + Math.random() * 255);
  let var3 = Math.ceil(0 + Math.random() * 255);
  return `rgb(${var1}, ${var2}, ${var3})`
}

Array.from(boxes).forEach(e=>{
  e.style.backgroundColor = getrandomcolor();
  e.style.color = getrandomcolor();
})