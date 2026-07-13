const data = {
    // Induction Cooktop
    induction: {
        title: "Induction Cooktop: Buyer’s Guide",
        intro: "Before picking a model, these are the 'must-check' factors:",
        // SUGGESTION 1:YOUR NEW FAMILY SIZE TIP
        familyGuide: "<strong>Family Size Tip:</strong> If you have a <strong>3-member family</strong>, 1600W–1800W is sufficient. For a <strong>5 or more member family</strong>, look for a 2000W+ minimum cooktop for faster and more efficient bulk cooking.",
        
        safetyPoints: [
            { feature: "No Open Flame", detail: "Eliminates the risk of kitchen fires and accidental cloth burns." },
            { feature: "Auto-Off Sensor", detail: "Automatically shuts down if no pan is detected or if it overheats." },
            { feature: "Cool Surface", detail: "The glass top stays relatively cool, preventing serious skin burns." }
        ],
        
        // SUGGESTION 2: NEW BUILD QUALITY SECTION
        buildQualityTips: [
            "<strong>A-Grade Microcrystalline Glass:</strong> Look for 'Polished Crystal' or 'A-Grade' glass. It resists cracking under high thermal shock (sudden temperature changes).",
            "<strong>ABS Plastic Body:</strong> The outer shell should be high-grade ABS plastic to resist heat deformation over time.",
            "<strong>Weight Capacity:</strong> A good build should easily support 8-10kg. Check if the legs have anti-skid rubber grips to prevent sliding.",
            "<strong>Integrated Cooling:</strong> A larger, heavy-duty fan and wide air vents indicate better internal build quality and heat dissipation."
        ], 
        // SUGGESTION 3: Error Code Decoder
        errorCodes: [
            { code: "E0", meaning: "No Pan Detected", solution: "Place an induction-compatible pan on the cooktop." },
            { code: "E1/E2", meaning: "Voltage Fluctuation", solution: "Wait for voltage to stabilize; use a stabilizer if frequent." },
            { code: "E5/E6", meaning: "Overheating", solution: "Switch off, let it cool, and check if the bottom fan is blocked." }
        ],
        // SUGGESTION 4: Compatibility
        cookware: {
            yes: ["Stainless Steel (with induction base)", "Cast Iron", "Enamelled Steel"],
            no: ["Pure Aluminum", "Copper", "Glass/Ceramic", "Clay Pots"]
        },
        
        tips: [
            "<strong>Wattage:</strong> Higher wattage (1800W to 2200W) means faster heating. For Indian cooking, at least 1600W is recommended.",
            "<strong>Coil Quality:</strong> Look for models with a 100% Copper Coil. It is more durable and conducts heat efficiently.",
            "<strong>Control Panel:</strong> Push Buttons are durable; Feather Touch is sleek but sensitive to wet fingers.",
            "<strong>Preset Menus:</strong> Look for dedicated modes like 'Idli,' 'Curry,' or 'Milk Boiling' with auto-off.",
            "<strong>Voltage Surge Protection :</strong> include Triple MOV surge protection designed to handle fluctuations up to 4000V, which protects the internal circuits from frying during power spikes.",
            "<strong>Pan Sensor:</strong> Safety feature—heats only when a compatible magnetic pan is placed.",
            "<strong>Extra Features:</strong> Child-Lock, Timer , Pause/Slow Cook options "
        ],
        maintenance: "Always ensure the exhaust fan underneath the cooktop is not blocked. Never place the induction on a plastic tablecloth or a soft surface that could get sucked into the vents.",
        magnetTest: "Induction works on electromagnetism. To check cookware, see if a fridge magnet sticks to the bottom. If it sticks, it works!",
        
        researchReport: {
            
            summary: "Our 'Smart Pick' for Induction is based on 45+ hours of cross-platform testing.",
            pillars: [
                { icon: "📊", label: "1,500+ Reviews", detail: "Filtered for 3 & 4-star long-term reliability reports." },
                { icon: "🔬", label: "Teardown Data", detail: "Verified 100% Copper Coils & IGBT cooling efficiency." },
                { icon: "🥘", label: "Indian UX", detail: "Real World Tested with 3/5-member family presets (Idli/Curry/Dosa)." }
            ] },
        products: [
            // PHILIPS MODELS
            { id: 1, brand: "Philips", persona: "Premium", name: "HD4995/00", price: "~₹4000", specs: "2100W, Soft Touch", tag: "High Performance", highlight: "11 Preset Menus, Triple MOV for 4kV Surge Protection.", warranty: "1 Year Product / 3 Years on Coil" },
            { id: 2, brand: "Philips", persona: "High-End", name: "HD4938/01", price: "~₹3700", specs: "2100W, Sensor Touch", tag: "Best Aesthetics", highlight: "Full Glass Panel, 24-hour Preset Timer, 10 Indian Menus.", warranty: "1 Year" },
            { id: 3, brand: "Philips", persona: "Mid-Range", name: "HD4929/01", price: "~₹3500", specs: "2100W, Push Button", tag: "Reliable", highlight: "8 Power Levels, Cool-Touch Surface, Ceramic Plate.", warranty: "1 Year" },
            { id: 4, brand: "Philips", persona: "Budget", name: "HD4928/01", price: "~₹3300", specs: "2100W, Push Button", tag: "Popular", highlight: "Manual Temp Control, Eco-friendly, 0-3 Hour Timer.", warranty: "1 Year" },
            
            // PIGEON MODELS
            { id: 5, brand: "Pigeon", persona: "Value for Money", name: "Stovekraft Cruise", price: "~₹1,800", specs: "1800W, Soft Push Button", tag: "Best Seller & Budget Friendly", highlight: "7 Segments LED Display, 93% Energy Saving Tech.", warranty: "1 Year" },
            { id: 6, brand: "Pigeon", persona: "Budget", name: "Favourite", price: "~₹2000", specs: "1800W, Push Button", tag: "Student Choice", highlight: "Carbon Steel worktop, Automatic switch off.", warranty: "1 Year" },
            
            // PRESTIGE MODELS
            { id: 7, brand: "Prestige", persona: "Value for Money", name: "PIC 20.0 (Button)", price: "~₹2100", specs: "1600W, Push Button", tag: "Feature Rich", highlight: "Automatic Voltage Regulator, Anti-Magnetic Wall.", warranty: "1 Year" },
            { id: 8, brand: "Prestige", persona: "Mid-Range", name: "PIC 20 Touch 6.3V", price: "~₹3000", specs: "2000W, Feather Touch", tag: "Modern", highlight: "Automatic Whistle Counter, Dual Heat Sensors.", warranty: "1 Year" },
            { id: 9, brand: "Prestige", persona: "Performance", name: "Atlas Touch", price: "~₹2700", specs: "2000W, Touch Control", tag: "Robust", highlight: "Full Ceramic Top, High-speed heating, Power Saver tech.", warranty: "1 Year" },
            { id: 10, brand: "Prestige", persona: "Powerful", name: "PIC 16.0 Plus", price: "~₹2300", specs: "2000W, Push Button", tag: "Heavy Duty", highlight: "Protection against insects, Automatic power adjustment.", warranty: "1 Year" },
            
            // Havells Models
            { id: 11, brand: "Havells" ,persona: "Safety", name:"Insta Cook PT", price: "~₹3,900", specs: "1900W, 6-7 Modes", tag: "Advanced Safety", highlight: "Superior cooling fans.",warranty:"1 Year" }
        ]
    },
    // AIR PURIFIER 
    air_purifier: {
        title: "Air Purifier: Buyer’s Guide (2026 Edition)",
        intro: "Don't settle for outdated filtration. Here is how to pick a modern, medical-grade purifier:",
    
    // RESEARCH BOX DATA (Updated for 1000 sq ft & H14)
        researchReport: {
            summary: "Our selection covers compact rooms to 1000 sq. ft. halls, focusing strictly on H13+ standards.",
            pillars: [
                { icon: "🌬️", label: "CADR & Coverage", detail: "Verified airflow for large spaces up to 1000 sq. ft." },
                { icon: "🛡️", label: "H13 vs H14 Analysis", detail: "Deep dive into 99.97% (H13) vs 99.995% (H14) filtration efficiency." },
                { icon: "📉", label: "Life-Cycle Cost", detail: "Calculated filter replacement costs and electricity for 24/7 use." }
            ]
        },

        // UPDATED TIPS (Warning against old standards)
        tips: [
            "<strong>Avoid Outdated HEPA:</strong> Do not buy purifiers using H10, H11, or H12 filters. These are no longer 'up to standard' for modern pollutants and allergens.",
            "<strong>The H13+ Standard:</strong> Always look for <strong>True HEPA H13</strong> (99.97% efficient) or <strong>H14</strong> (99.995% efficient) for medical-grade air cleaning.",
            "<strong>CADR for 1000 sq. ft.:</strong> For large halls, ensure the CADR is at least 500-600 m³/h to maintain 2-3 air changes per hour.",
            "<strong>H14 Benefits:</strong> H14 filters are significantly more dense; only choose these if the machine has a powerful motor to push air through the thick pleats."
        ],

        products: [
            // PHILIPS
            { id: 201, brand: "Philips", persona: "Compact", name: "AC0920", price: "~₹8,500", specs: "H13 HEPA, 190 m³/h", tag: "Small Bedroom", highlight: "Quiet Sleep mode, AeraSense sensor.", warranty: "2 Years" },
            { id: 202, brand: "Philips", persona: "Value", name: "AC0950", price: "~₹10,500", specs: "H13 HEPA, 250 m³/h", tag: "Standard Room", highlight: "4-color air quality indicator, compact design.", warranty: "2 Years" },

            // COWAY
            { id: 203, brand: "Coway", persona: "Premium", name: "AirMega AIM", price: "~₹15,000", specs: "Green HEPA, 360° Suction", tag: "Design Choice", highlight: "Integrated Fan/Purifier, H13 equivalent.", warranty: "1 Year + 5 Years on Motor" },
            { id: 204, brand: "Coway", persona: "Expert Choice", name: "AirMega 150", price: "~₹13,500", specs: "CADR 303 m³/h, Green HEPA", tag: "Top Longevity", highlight: "Award-winning design, easy-clean pre-filter.", warranty: "1 Year" },

            // XIAOMI
            { id: 205, brand: "Xiaomi", persona: "Budget Smart", name: "Smart AP 4 Lite", price: "~₹10,000", specs: "H13 HEPA, 360 m³/h", tag: "Best Value", highlight: "App control, small footprint.", warranty: "1 Year" },
            { id: 206, brand: "Xiaomi", persona: "Performance", name: "Smart AP 4 ", price: "~₹16,000", specs: "H13 HEPA, 500 m³/h", tag: "Large Room", highlight: "OLED display, Negative Ion trigger.", warranty: "1 Year" },

            // HONEYWELL (The V-Series)
            { id: 207, brand: "Honeywell", persona: "Classic", name: "Air Touch V1", price: "~₹6,500", specs: "H12/H13 Mix", tag: "Legacy", highlight: "Simple controls, reliable.", warranty: "1 Year" },
            { id: 208, brand: "Honeywell", persona: "Standard", name: "Air Touch V2", price: "~₹7,500", specs: "H13 HEPA, 250 m³/h", tag: "Budget King", highlight: "Quick-change filters.", warranty: "1 Year" },
            { id: 209, brand: "Honeywell", persona: "Advanced", name: "Air Touch V3", price: "~₹10,000", specs: "H13 HEPA, 300 m³/h", tag: "Modern", highlight: "Child lock, night mode.", warranty: "1 Year" },
            { id: 210, brand: "Honeywell", persona: "Powerful", name: "Air Touch V4", price: "~₹14,000", specs: "H13 HEPA, 450 m³/h", tag: "Large Space", highlight: "Dual-side intake.", warranty: "1 Year" },
            { id: 211, brand: "Honeywell", persona: "Elite", name: "Air Touch V5", price: "~₹19,000", specs: "H14 Grade, 550 m³/h", tag: "Medical Grade", highlight: "Maximum filtration, large coverage.", warranty: "1 Year" },

            // QUBO (Full Range)
            { id: 212, brand: "Qubo", persona: "Ultra Budget", name: "Q200", price: "~₹4,500", specs: "H13, 200 m³/h", tag: "Entry Level", highlight: "Extremely affordable.", warranty: "1 Year" },
            { id: 213, brand: "Qubo", persona: "Value", name: "Q400", price: "~₹7,000", specs: "H13, 400 m³/h", tag: "Best Seller", highlight: "Smart Wi-Fi enabled.", warranty: "1 Year" },
            { id: 214, brand: "Qubo", persona: "Mid-Range", name: "Q500", price: "~₹9,000", specs: "H13, 500 m³/h", tag: "Large Room", highlight: "High CADR for price.", warranty: "1 Year" },
            { id: 215, brand: "Qubo", persona: "Performance", name: "Q600", price: "~₹12,000", specs: "H13, 600 m³/h", tag: "Fast Cleaning", highlight: "Rugged build.", warranty: "1 Year" },
            { id: 216, brand: "Qubo", persona: "Industrial", name: "Q1000", price: "~₹25,000", specs: "H13, 1000 m³/h", tag: "Hall Specialist", highlight: "Dual blower system.", warranty: "1 Year" },

            // DYSON
            { id: 217, brand: "Dyson", persona: "Ultra Premium", name: "HushJet", price: "~₹29,000", specs: "H14 HEPA, Acoustic Dampening", tag: "Silent Power", highlight: "Formaldehyde destruction, 10m projection.", warranty: "2 Years" }
            ]
        }
};

const compareSelection = [];

/* ---------------- CATEGORY LOAD ---------------- */

function loadCategory(catKey) {
    const category = data[catKey];

    document.getElementById('home-screen').classList.add('hidden');
    document.getElementById('category-screen').classList.remove('hidden');

    document.getElementById('category-title').innerText = category.title;

    renderGuide(category);
    renderFilters(category, catKey);
    renderProducts(category.products, catKey);
}

/* ---------------- GUIDE SECTION ---------------- */

function renderGuide(category) {
    let guideHTML = `
        <h3>Buying Guide</h3>
        <p>${category.intro}</p>

        ${category.familyGuide ? `<div class="family-tip-box">${category.familyGuide}</div>` : ''}

        ${category.buildQualityTips ? `
            <h4>Build Quality</h4>
            <ul>${category.buildQualityTips.map(t => `<li>${t}</li>`).join('')}</ul>
        ` : ''}

        ${category.tips ? `
            <h4>Key Tips</h4>
            <ul>${category.tips.map(t => `<li>${t}</li>`).join('')}</ul>
        ` : ''}

        ${category.maintenance ? `
            <h4>Maintenance</h4>
            <p>${category.maintenance}</p>
        ` : ''}

        ${category.magnetTest ? `
            <h4>Compatibility Check</h4>
            <p>${category.magnetTest}</p>
        ` : ''}
    `;

    document.getElementById('buying-guide').innerHTML = guideHTML;
}

/* ---------------- FILTERS ---------------- */

function renderFilters(category, catKey) {
    const brands = [...new Set(category.products.map(p => p.brand))];

    let filterHTML = `
        <div class="filter-group">
            <label>Brand:</label>
            <select onchange="filterProducts(this.value, '${catKey}')">
                <option value="all">All</option>
                ${brands.map(b => `<option value="${b}">${b}</option>`).join('')}
            </select>
        </div>
    `;

    document.querySelector('.filter-container').innerHTML = filterHTML;
}

/* ---------------- PRODUCTS ---------------- */

function renderProducts(products, catKey) {
    document.getElementById('product-grid').innerHTML =
        products.map(p => productCard(p, catKey)).join('');
}

function productCard(p, catKey) {
    return `
        <div class="product-card">
            <div class="tag">${p.tag}</div>
            <h4>${p.brand} ${p.name}</h4>
            <p><strong>${p.price}</strong></p>
            <p>${p.specs}</p>
            <p><small>${p.highlight}</small></p>
            <button onclick="addToCompare('${catKey}', ${p.id})">Compare</button>
        </div>
    `;
}

/* ---------------- FILTER ---------------- */

function filterProducts(brand, catKey) {
    const products = data[catKey].products;

    const filtered = brand === "all"
        ? products
        : products.filter(p => p.brand === brand);

    renderProducts(filtered, catKey);
}

/* ---------------- COMPARE ---------------- */

function addToCompare(catKey, id) {
    const product = data[catKey].products.find(p => p.id === id);

    if (compareSelection.length < 2) {
        if (compareSelection.includes(product)) return;

        compareSelection.push(product);

        if (compareSelection.length === 2) {
            renderCompare();
            toggleCompare(true);
        } else {
            alert("Select one more product to compare");
        }
    }
}

function renderCompare() {
    const [p1, p2] = compareSelection;

    document.getElementById('comparison-table-container').innerHTML = `
        <table class="data-table">
            <tr><th>Feature</th><th>${p1.name}</th><th>${p2.name}</th></tr>
            <tr><td>Price</td><td>${p1.price}</td><td>${p2.price}</td></tr>
            <tr><td>Specs</td><td>${p1.specs}</td><td>${p2.specs}</td></tr>
            <tr><td>Highlight</td><td>${p1.highlight}</td><td>${p2.highlight}</td></tr>
        </table>
    `;
}

function toggleCompare(show) {
    const overlay = document.getElementById('compare-overlay');

    if (show) {
        overlay.classList.add('active');
    } else {
        overlay.classList.remove('active');
        compareSelection.length = 0;
    }
}



/* ---------------- NAVIGATION ---------------- */

function goHome() {
    document.getElementById('home-screen').classList.remove('hidden');
    document.getElementById('category-screen').classList.add('hidden');
}