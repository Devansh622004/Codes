function typeLoop(element, text) {
    let i = 0, forward = true;
    const colors = ['#ff0000', 'HEX: #A47864', 'HEX: #FFBE98', '#ff00ff', 'HEX: #BB2649', 'HEX: #5F4B8B', 'Hex #955251', 'Hex #B565A7', 'Hex #009B77', 'Hex #D65076', 'Hex #45B8AC'];
    let colorIndex = 0;
    
    function type() {
        if (forward) {
            if (i < text.length) {
                element.innerHTML = text.slice(0, i+1) + '|';
                element.style.color = colors[colorIndex];
                i++;
                setTimeout(type, 120);
            } else {
                forward = false;
                setTimeout(type, 2000); // Pause 2s at end
            }
        } else {
            if (i > 0) {
                element.innerHTML = text.slice(0, i-1) + '|';
                element.style.color = colors[colorIndex];
                i--;
                setTimeout(type, 80);
            } else {
                // Color changes on fresh restart!
                colorIndex = (colorIndex + 1) % colors.length;
                element.style.color = colors[colorIndex];
                forward = true;
                setTimeout(type, 1000); // Pause 1s at start
            }
        }
    }
    type();
}

// Pulsing glow on cards (runs continuously)
function pulseCards() {
    const cards = document.querySelectorAll('.card');
    cards.forEach((card, i) => {
        card.style.animation = `pulse 2s ease-in-out ${i*0.3}s infinite`;
    });
}

// Start on page load
document.addEventListener('DOMContentLoaded', () => {
    const heroH2 = document.querySelector('.hero h2');
    if (heroH2) typeLoop(heroH2, heroH2.textContent);
    
    setTimeout(pulseCards, 500);
});
