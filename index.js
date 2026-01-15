const express = require("express");
const app = express();

app.get("/", (req, res) => {
  res.send(`
    🚀 CI/CD pipeline working on Ubuntu! <br>
    🚀 HELLO EVERYONE GOOD MORNING <br>
    🚀 Eoxys IT Solution, Nami Nagar, Jaipur
  `);
});

app.listen(3000, () => console.log("App running on port 3000"));
