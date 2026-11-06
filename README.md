<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<meta name="description" content="A student project exploring five military formations described in the Mahabharata, under the Indian Knowledge System.">
<title>Vyuha Rachna | Indian Knowledge System</title>
<style>
:root {
  --cream: #f3e8d1;
  --cream-light: #fffaf0;
  --burgundy: #6b2437;
  --burgundy-dark: #421a27;
  --gold: #ad8548;
  --ink: #382b27;
  --muted: #75665a;
  --line: rgba(107,36,55,.22);
}
* { box-sizing: border-box; }
html { scroll-behavior: smooth; }
body {
  margin: 0;
  color: var(--ink);
  background:
    radial-gradient(ellipse at 10% 5%, rgba(173,133,72,.12), transparent 34%),
    radial-gradient(ellipse at 90% 75%, rgba(107,36,55,.06), transparent 38%),
    var(--cream);
  font-family: Georgia, "Times New Roman", serif;
  line-height: 1.75;
}
a { color: var(--burgundy); }
header {
  position: sticky; top: 0; z-index: 20;
  background: rgba(66,26,39,.97);
  border-bottom: 3px solid var(--gold);
}
.nav {
  width: min(1120px, 92%); margin: auto; min-height: 64px;
  display: flex; justify-content: space-between; align-items: center; gap: 18px;
}
.brand { color: #fff2dc; text-decoration: none; font-weight: bold; letter-spacing: .14em; white-space: nowrap; }
nav { display: flex; flex-wrap: wrap; gap: 17px; }
nav a { color: #f6e9d2; text-decoration: none; font-size: .92rem; }
nav a:hover { color: #e5c48c; }
.hero {
  min-height: 490px; display: grid; place-items: center; text-align: center;
  padding: 82px 20px 76px; color: #fff4e1;
  background:
    linear-gradient(rgba(48,20,30,.82), rgba(48,20,30,.90)),
    repeating-linear-gradient(135deg, transparent 0 17px, rgba(255,255,255,.035) 17px 18px),
    var(--burgundy-dark);
  border-bottom: 8px double var(--gold);
}
.hero-inner { max-width: 900px; }
.eyebrow { color: #e5c48c; letter-spacing: .23em; text-transform: uppercase; font-size: .78rem; font-weight: bold; }
h1 { margin: 15px 0; font-size: clamp(2.7rem, 7vw, 5.4rem); line-height: 1.08; letter-spacing: .06em; }
.hero h2 { color: #f2dfbf; font-size: clamp(1.1rem, 2.8vw, 1.7rem); font-weight: normal; margin: 10px 0; }
.hero p { max-width: 700px; margin: 18px auto; color: #f1e3ce; }
.ornament { color: #d8b574; letter-spacing: .55em; font-size: 1.5rem; margin-top: 20px; }
.button {
  display: inline-block; margin-top: 20px; padding: 10px 22px;
  color: #35202a; background: #e7c98f; border: 1px solid #f7e6c1;
  text-decoration: none; font-weight: bold; transition: .2s;
}
.button:hover { background: #f4dfb1; transform: translateY(-2px); }
main { width: min(1080px, 91%); margin: auto; }
section { padding: 68px 0; scroll-margin-top: 82px; }
.section-head { text-align: center; margin-bottom: 34px; }
.section-head .eyebrow { color: var(--gold); }
h2 { color: var(--burgundy); font-size: clamp(1.9rem, 4vw, 2.7rem); line-height: 1.2; margin: 8px 0 12px; }
.section-head p { max-width: 760px; margin: auto; color: var(--muted); }
.intro {
  max-width: 900px; margin: auto; padding: 28px 32px;
  background: rgba(255,250,240,.78); border: 1px solid var(--line);
  border-left: 5px solid var(--gold); box-shadow: 0 8px 24px rgba(56,43,39,.06);
}
.intro p:first-child { margin-top: 0; }
.small-note { color: var(--muted); font-size: .92rem; font-style: italic; }
.vyuha {
  display: grid; grid-template-columns: minmax(245px,.9fr) 1.3fr;
  align-items: center; gap: 30px; padding: 32px 0;
  border-bottom: 1px solid var(--line);
}
.vyuha:nth-of-type(even) .art { order: 2; }
.vyuha h3 { color: var(--burgundy); font-size: 1.7rem; margin: 0 0 8px; }
.vyuha h4 { color: var(--burgundy-dark); margin: 18px 0 4px; font-size: 1.05rem; }
.vyuha p { margin: 7px 0; }
.vyuha ul { padding-left: 21px; margin: 8px 0; }
.vyuha li { margin: 6px 0; }
.art {
  min-height: 245px; display: grid; place-items: center; padding: 18px;
  background: rgba(255,250,240,.82); border: 1px solid var(--line); border-radius: 3px;
}
.art svg { width: min(100%, 350px); height: auto; }
.art-caption { color: var(--muted); text-align: center; font-size: .85rem; margin-top: 3px; }
.callout {
  margin-top: 16px; padding: 12px 15px; background: rgba(173,133,72,.11);
  border-left: 3px solid var(--gold); font-size: .94rem;
}
.conclusion {
  background: var(--burgundy-dark); color: #f7ead6; padding: 34px;
  border: 5px double var(--gold); text-align: center;
}
.conclusion h2 { color: #f0d7a8; }
.conclusion p { max-width: 850px; margin: auto; }
.bibliography {
  max-width: 920px; margin: auto; padding: 26px 30px;
  background: rgba(255,250,240,.78); border: 1px solid var(--line);
}
.bibliography li { margin: 12px 0; overflow-wrap: anywhere; }
.bibliography a { overflow-wrap: anywhere; }
footer { background: #351c26; color: #f0dfc7; text-align: center; padding: 26px 15px; }
footer strong { color: #e8c78d; }
footer p { margin: 5px 0; }
.back { display: inline-block; margin-top: 8px; color: #e8c78d; }
@media(max-width:760px) {
  .nav { padding: 12px 0; align-items: flex-start; flex-direction: column; }
  nav { gap: 10px 14px; }
  .vyuha { grid-template-columns: 1fr; }
  .vyuha:nth-of-type(even) .art { order: 0; }
  .intro { padding: 22px; }
  section { padding: 52px 0; }
}
</style>
</head>
<body>
<header>
  <div class="nav">
    <a class="brand" href="#home">VYUHA RACHNA</a>
    <nav aria-label="Main navigation">
      <a href="#introduction">Introduction</a>
      <a href="#chakravyuha">Chakravyuha</a>
      <a href="#makaravyuha">Makaravyuha</a>
      <a href="#mandalavyuha">Mandalavyuha</a>
      <a href="#garudavyuha">Garudavyuha</a>
      <a href="#kraunchavyuha">Kraunchavyuha</a>
      <a href="#bibliography">Bibliography</a>
    </nav>
  </div>
</header>

<section class="hero" id="home">
  <div class="hero-inner">
    <div class="eyebrow">Indian Knowledge System · MIT Art, Design and Technology University</div>
    <h1>Vyuha Rachna</h1>
    <h2>Military Formations of the Mahabharata Era</h2>
    <p>An exploration of five significant <em>vyuhas</em>—their symbolic forms, descriptions and place in the epic narrative of the Kurukshetra War.</p>
    <div class="ornament">✦ ❖ ✦</div>
    <a class="button" href="#introduction">Explore the Formations</a>
  </div>
</section>

<main>
<section id="introduction">
  <div class="section-head">
    <div class="eyebrow">01 · The context</div>
    <h2>Introduction</h2>
    <p>Understanding the idea of a vyuha in the Mahabharata</p>
  </div>
  <div class="intro">
    <p>The <em>Mahabharata</em>, one of the great epics of India, narrates the conflict between the Pandavas and the Kauravas at Kurukshetra. Within this narrative, the arrangement of armies plays an important role. Such organised battle arrays are known as <strong>vyuhas</strong>.</p>
    <p>The word <em>vyuha</em> refers to an arrangement or formation. In the epic, formations are described through shapes found in nature and familiar objects, such as a wheel, crocodile, circle, eagle and heron. These names help readers imagine how an army was arranged and how different parts of the formation related to one another.</p>
    <p>This project introduces five formations mentioned in discussions of the Mahabharata: Chakravyuha, Makaravyuha, Mandalavyuha, Garudavyuha and Kraunchavyuha. It approaches them as part of India's literary and knowledge heritage.</p>
    <p class="small-note">Note: The Mahabharata has multiple recensions and translations. Descriptions and episode details can vary between editions; the diagrams on this website are simple illustrative interpretations, not verified historical battle plans.</p>
  </div>
</section>

<section id="formations">
  <div class="section-head">
    <div class="eyebrow">02 · Five formations</div>
    <h2>Military Formations of the Mahabharata Era</h2>
    <p>Each section follows the same three-part structure: what the vyuha is, its described form, and its place in the Mahabharata narrative.</p>
  </div>

  <article class="vyuha" id="chakravyuha">
    <div class="art">
      <div>
        <svg viewBox="0 0 340 220" role="img" aria-label="Decorative concentric-circle illustration representing Chakravyuha">
          <g fill="none" stroke="#8a3448" stroke-width="3">
            <circle cx="170" cy="105" r="83"/><circle cx="170" cy="105" r="62"/>
            <circle cx="170" cy="105" r="40"/><circle cx="170" cy="105" r="17"/>
          </g>
          <g stroke="#ad8548" stroke-width="2">
            <path d="M170 22V188M87 105H253M111 46L229 164M229 46L111 164"/>
          </g>
          <circle cx="170" cy="105" r="6" fill="#ad8548"/>
        </svg>
        <div class="art-caption">Illustrative motif · concentric wheel-like rings</div>
      </div>
    </div>
    <div>
      <h3>1. Chakravyuha</h3>
      <h4>What is Chakravyuha?</h4>
      <p><em>Chakra</em> means wheel or discus. Chakravyuha is described as a complex, layered formation associated with a circular or rotating arrangement. Its name evokes a wheel with successive rings.</p>
      <h4>Mechanism and Structure</h4>
      <p>In the epic tradition, the formation is presented as a carefully organised array with multiple layers. The circular image suggests successive defensive lines and coordinated movement. The exact practical arrangement is not fully specified in a way that allows a single definitive reconstruction.</p>
      <h4>Where was it used in the Mahabharata?</h4>
      <p>The best-known episode occurs on the thirteenth day of the Kurukshetra War, when Dronacharya is associated with arranging the Kaurava army in the Chakravyuha. Abhimanyu enters the formation but is unable to make his way out, becoming one of the central figures in this tragic episode.</p>
      <div class="callout"><strong>Significance:</strong> The episode is remembered for its themes of courage, duty, knowledge and the consequences of an unfair battle.</div>
    </div>
  </article>

  <article class="vyuha" id="makaravyuha">
    <div class="art">
      <div>
        <svg viewBox="0 0 340 220" role="img" aria-label="Decorative crocodile-inspired silhouette representing Makaravyuha">
          <path d="M36 111 Q68 55 143 72 Q190 43 246 83 L303 62 L286 107 L307 151 L247 132 Q190 177 139 145 Q70 164 36 111Z" fill="#ad8548" opacity=".24" stroke="#6b2437" stroke-width="3"/>
          <path d="M38 111 Q80 86 141 91 Q194 65 251 99 L299 83 M38 111 Q85 136 143 128 Q202 159 252 119 L298 140" fill="none" stroke="#6b2437" stroke-width="3"/>
          <circle cx="235" cy="94" r="4" fill="#6b2437"/>
          <path d="M90 80L77 47M122 76L116 42M155 78L161 45M190 84L207 54" stroke="#ad8548" stroke-width="3"/>
          <path d="M80 143L69 176M120 143L116 181M165 145L174 178M208 137L225 166" stroke="#ad8548" stroke-width="3"/>
        </svg>
        <div class="art-caption">Illustrative motif · makara-inspired outline</div>
      </div>
    </div>
    <div>
      <h3>2. Makaravyuha</h3>
      <h4>What is Makaravyuha?</h4>
      <p><em>Makara</em> is a mythical aquatic creature often represented in Indian art with features associated with powerful water animals. Makaravyuha is an army formation named after this creature.</p>
      <h4>Mechanism and Structure</h4>
      <p>The name suggests an arrangement whose overall outline resembles a makara. Traditional explanations associate different portions of the formation with parts of the creature. The available descriptions do not establish one universally agreed diagram, so the illustration here is symbolic.</p>
      <h4>Where was it used in the Mahabharata?</h4>
      <p>Makaravyuha is included among the battle formations associated with the Kurukshetra War. Traditional references connect it with the Bhishma Parva. The details of the formation and the day on which it appears can differ across retellings and reference works.</p>
      <div class="callout"><strong>Significance:</strong> Its name shows how imagery from the natural and mythological world was used to describe organised formations in the epic.</div>
    </div>
  </article>

  <article class="vyuha" id="mandalavyuha">
    <div class="art">
      <div>
        <svg viewBox="0 0 340 220" role="img" aria-label="Decorative circular mandala representing Mandalavyuha">
          <g transform="translate(170 108)" fill="none" stroke="#6b2437" stroke-width="2.5">
            <circle r="83"/><circle r="58"/><circle r="31"/>
            <ellipse rx="83" ry="35"/><ellipse rx="35" ry="83"/>
            <ellipse rx="70" ry="70" transform="rotate(45)"/>
            <ellipse rx="70" ry="70" transform="rotate(-45)"/>
          </g>
          <circle cx="170" cy="108" r="8" fill="#ad8548"/>
        </svg>
        <div class="art-caption">Illustrative motif · balanced circular arrangement</div>
      </div>
    </div>
    <div>
      <h3>3. Mandalavyuha</h3>
      <h4>What is Mandalavyuha?</h4>
      <p><em>Mandala</em> means circle, disc or a structured circular design. Mandalavyuha refers to a circular arrangement of an army.</p>
      <h4>Mechanism and Structure</h4>
      <p>Descriptions of the mandala formation emphasise a circular disposition. A circular arrangement can be understood as an array organised around a centre, with its divisions positioned in relation to the surrounding sides. The diagram is a visual aid rather than a precise reconstruction.</p>
      <h4>Where was it used in the Mahabharata?</h4>
      <p>Mandalavyuha is listed among the formations described in accounts of the Kurukshetra War. Traditional references associate it with the Bhishma Parva. The epic includes several named formations, and their descriptions are not always identical in every edition or later explanation.</p>
      <div class="callout"><strong>Significance:</strong> The circular form represents an organised arrangement that can be considered from all directions.</div>
    </div>
  </article>

  <article class="vyuha" id="garudavyuha">
    <div class="art">
      <div>
        <svg viewBox="0 0 340 220" role="img" aria-label="Symmetrical eagle-inspired line illustration representing Garudavyuha">
          <path d="M170 106 L30 47 L80 112 L42 157 L145 137 L170 183 L195 137 L298 157 L260 112 L310 47 Z" fill="#ad8548" opacity=".22" stroke="#6b2437" stroke-width="3"/>
          <path d="M170 106L170 183M170 106L30 47M170 106L310 47M80 112L145 137L170 106L195 137L260 112" fill="none" stroke="#6b2437" stroke-width="3"/>
          <path d="M145 91L170 48L195 91L170 112Z" fill="#ad8548" opacity=".55" stroke="#6b2437" stroke-width="2"/>
          <circle cx="170" cy="105" r="5" fill="#6b2437"/>
        </svg>
        <div class="art-caption">Illustrative motif · spread-wing bird silhouette</div>
      </div>
    </div>
    <div>
      <h3>4. Garudavyuha</h3>
      <h4>What is Garudavyuha?</h4>
      <p><em>Garuda</em> is the great bird associated with Lord Vishnu in Indian tradition. Garudavyuha is a formation named after Garuda and is commonly represented with a head, body and spread wings.</p>
      <h4>Mechanism and Structure</h4>
      <p>The bird-shaped image provides a way to understand the arrangement: a central body with extensions on either side. Traditional descriptions assign important positions to different parts of the formation, though exact placements may vary by account.</p>
      <h4>Where was it used in the Mahabharata?</h4>
      <p>In the war narrative, Garudavyuha is associated with the Kaurava army on the third day in many traditional summaries. The Mahabharata's descriptions of the battle arrays are found in the Bhishma Parva.</p>
      <div class="callout"><strong>Significance:</strong> Garuda's image conveys strength and an expansive formation with a central body and two wings.</div>
    </div>
  </article>

  <article class="vyuha" id="kraunchavyuha">
    <div class="art">
      <div>
        <svg viewBox="0 0 340 220" role="img" aria-label="Heron-inspired outline representing Kraunchavyuha">
          <path d="M38 150 Q85 85 146 104 Q171 111 188 77 Q202 50 222 53 Q240 58 226 80 L207 104 Q260 94 305 122 Q263 128 230 151 Q181 173 135 145 Q84 173 38 150Z" fill="#ad8548" opacity=".22" stroke="#6b2437" stroke-width="3"/>
          <path d="M204 103L245 26L252 30L224 111M240 28L274 22" fill="none" stroke="#6b2437" stroke-width="3"/>
          <path d="M88 117L58 80M118 108L100 64M149 111L151 68M178 113L197 72" stroke="#ad8548" stroke-width="3"/>
          <circle cx="220" cy="63" r="3.5" fill="#6b2437"/>
        </svg>
        <div class="art-caption">Illustrative motif · long-necked bird silhouette</div>
      </div>
    </div>
    <div>
      <h3>5. Kraunchavyuha</h3>
      <h4>What is Kraunchavyuha?</h4>
      <p><em>Krauncha</em> refers to a heron or crane-like bird. Kraunchavyuha is a formation named after this bird and is traditionally visualised through a bird-like arrangement.</p>
      <h4>Mechanism and Structure</h4>
      <p>The formation is often explained through the bird's recognisable shape, including a front portion, central body and extended sides. These visual associations help explain the name, while the exact troop positions are not consistently reconstructed in modern summaries.</p>
      <h4>Where was it used in the Mahabharata?</h4>
      <p>Traditional accounts commonly describe the Pandava army as adopting Kraunchavyuha on the second day of the Kurukshetra War. The formation is discussed in connection with the Bhishma Parva.</p>
      <div class="callout"><strong>Significance:</strong> Kraunchavyuha illustrates the use of familiar bird forms as a way of describing the shape of an army array.</div>
    </div>
  </article>
</section>

<section id="conclusion">
  <div class="conclusion">
    <div class="eyebrow">03 · Reflection</div>
    <h2>Conclusion</h2>
    <p>The vyuhas described in the Mahabharata offer a glimpse into the epic's rich presentation of planning, organisation and symbolism. Each formation carries a distinct name and visual identity, connecting the arrangement of an army with shapes drawn from nature and tradition. Studying these formations as part of the Indian Knowledge System encourages us to explore the knowledge, literature and cultural imagination preserved in India's classical texts.</p>
  </div>
</section>

<section id="bibliography">
  <div class="section-head">
    <div class="eyebrow">04 · References</div>
    <h2>Bibliography</h2>
    <p>Research sources</p>
  </div>
  <div class="bibliography">
    <ol>
      <li>Mahabharata – Chapter index.</li>
      <li>Bhishma Parva – Ganguli English translation, Garuda formation.</li>
      <li>Bhishma Parva – chapter-by-chapter contents.</li>
      <li>Drona Parva.</li>
    </ol>
    <p class="small-note">This website has been created as part of an Indian Knowledge System (IKS) project. The content is based on research from ancient texts of the Mahabharata and information available on the internet. The illustrations are simplified, original diagrams made for educational purposes only.</p>
  </div>
</section>
</main>

<footer>
  <p><strong>Indian Knowledge System (IKS)</strong></p>
  <p>MIT Art, Design and Technology University</p>
  <p>Academic project · Vyuha Rachna: Military Formations of the Mahabharata Era</p>
  <a class="back" href="#home">Back to top ↑</a>
</footer>
</body>
</html>
