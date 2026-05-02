function scrollToSection(id){
  document.getElementById(id).scrollIntoView({behavior:"smooth"});
}

// GitHub Projects (غير اسمك هنا)
fetch("https://api.github.com/users/YOUR_USERNAME/repos")
.then(res => res.json())
.then(data => {
  let container = document.getElementById("projectContainer");

  data.forEach(repo => {
    container.innerHTML += `
      <div class="card">
        <h3>${repo.name}</h3>
        <p>${repo.description || "No description"}</p>
        <a href="${repo.html_url}" target="_blank" style="color:#38bdf8">View</a>
      </div>
    `;
  });
});
