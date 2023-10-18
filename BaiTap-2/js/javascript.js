function clickHelp() {
    console.log('testing...');
    document.getElementById('help').style.display = 'block';
    document.getElementById('main').style.display = 'none';
    document.getElementById('imgHelp').style.display = 'none';
  }

  function clickClose() {
    document.getElementById('help').style.display = 'none';
    document.getElementById('main').style.display = 'block';
    document.getElementById('imgHelp').style.display = 'block';
  }
  // Function to handle the Cancel button
  function clickCancel() {
    // You can add custom cancel logic here
    // For now, let's reset the form and show the main content
    document.querySelector('form').reset();
    clickClose();
  }