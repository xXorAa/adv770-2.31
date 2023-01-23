// page.h: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021, licensed
// under GPL (version 3 or later) or the Modified BSD Licence, whichever is
// asserted by the supplied LICENCE file. GPL3 if no licence file.
//
// 04 Mar 20   MLA          First release version
// ?? ??? 08   MLA          Initial coding
//
QString page =
"<html><style id=style>"
".query {color:red}"
"</style><script>"
"var bottom = 0;"
"function init() {"
"  bottom = document.getElementById('bottom');"
"}"
"function writeIt (cmd, response) {"
"  var type = response.substr(0,1);"
"  var text = response.substr(1);"
"  if (text == '') return;"
"  if (type == 't')"
"    text = text.replace(\"prompt'></\", \"prompt'>? </\");"
"  var pr = document.getElementById('prompt');"
"  var prompt = pr.innerHTML;"
"  var el = document.createElement('span');"
"  el.innerHTML = prompt + cmd;"
"  el.className = 'query';"
"  pr.parentNode.replaceChild(el, pr);"
"  var newDiv = document.createElement('div');"
"  newDiv.setAttribute('name', 'chunk');"
"  newDiv.innerHTML = text;"
"  bottom.insertBefore(newDiv, null);"
"  window.scrollTo(0, bottom.offsetTop);"
"  var chunks = document.getElementsByName('chunk');"
"  if (chunks.length > " MAX_MOVE_DISPLAY ")"
"    chunks[0].parentNode.removeChild(chunks[0]);"
"}"
"function restyle(s)"
"{"
"  document.getElementById('style').innerHTML = s;"
"}"
"</script><head>"
"</head><body bgcolor='#d0e0ff' onLoad='javascript:init()'>"
"<span id=prompt></span><div id=bottom></div>"
"</body></html>";
