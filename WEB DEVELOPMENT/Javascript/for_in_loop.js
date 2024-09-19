let obj = {
    a: "1",
    b: "2",
    c: "3",
    d: "4",
    e: "5"
}

for (const key in obj) {
    if (Object.prototype.hasOwnProperty.call(obj, key)) {
        const element = obj[key];
        console.log(element);
    }
}