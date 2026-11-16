---
layout: post
title:  "Structured interpretation of EEG reports with language models"
date:   2026-10-27
author: Steven Bergner
breadcrumb: /
categories: research
permalink: /research/eeg-report-interpretation/
---

> **Status:** public medRxiv version 2; manuscript under submission to the IEEE
> Journal of Biomedical and Health Informatics. This is a preprint, not an
> accepted journal publication, and it has not been certified by peer review.

Clinical evidence is often preserved in narrative reports that are useful to
specialists but difficult to analyze at scale. This project studies how locally
run language models can convert free-text EEG reports into structured research
annotations while retaining an ordinal certainty tier for each assigned label.

## Abstract at a glance

* **Objective.** Extract structured diagnostic labels and label-certainty tiers
  from unstructured, free-text EEG reports.
* **Method.** Compare grammar-constrained local language models with expert
  annotations and lower-resource NLP baselines.
* **Result.** The studied pipelines produced high agreement on core report
  classifications, with a remaining challenge in representing nuanced
  certainty.
* **Pathway.** The work provides a principled route toward reviewable
  annotation support by preserving assigned label certainty, benchmarking
  against expert annotations, and keeping structured outputs inspectable;
  prospective validation and clinical governance are the next gates.

## One label, three views of agreement

The schema encodes five judgments---overall abnormality and four specific
finding categories---on one four-level ordinal scale. Each label pairs a
presence-or-absence decision with an expressed certainty tier.

<div class="confidence-scale" aria-label="Four-level label-certainty scale">
  <div class="confidence-level"><strong>1</strong><span>certain absence</span></div>
  <div class="confidence-level"><strong>2</strong><span>low-certainty absence</span></div>
  <div class="confidence-level confidence-presence"><strong>3</strong><span>low-certainty presence</span></div>
  <div class="confidence-level"><strong>4</strong><span>certain presence</span></div>
</div>

That single label supports three nested readings:

* **Core Agreement** asks whether the compared labels agree on absence (levels
  1--2) versus presence (levels 3--4).
* **Certainty-Adjusted Agreement** requires the same exact level from 1 to 4.
* **Conditional Certainty Agreement** asks, among decisions that already match
  on absence or presence, what proportion also match on the certainty tier. It
  is an agreement proportion, not a calibrated probability.

> **Exact four-level agreement = Core Agreement x Conditional Certainty Agreement.**

<figure class="eeg-pipeline-teaser">
  <a href="{{ site.baseurl }}/assets/img/eeg-structured-pipeline.png"><img src="{{ site.baseurl }}/assets/img/eeg-structured-pipeline.png" alt="Diagram separating prompt development, local EEG report processing, and agreement evaluation"></a>
  <figcaption>The paper separates development, local report processing, and evaluation. Reference labels re-enter only after inference, and grammars constrain machine-readable structure rather than clinical correctness.</figcaption>
</figure>

## Thesis-to-publication pathway

The study originated in Wanying Tian's Computing Science MSc research and grew
through interdisciplinary clinical and computing collaboration and a
reproducible analysis pipeline.

## Collaboration map

<style>
.author-roster {
  border-bottom: 1px solid #d8d8d8;
  border-top: 1px solid #d8d8d8;
  margin: 0.7rem 0 1.1rem;
}
.author-roster-row {
  border-bottom: 1px solid #ececec;
  display: grid;
  font-size: 0.9rem;
  gap: 0.8rem;
  grid-template-columns: minmax(10rem, 0.8fr) minmax(13rem, 1.7fr);
  line-height: 1.35;
  padding: 0.32rem 0;
}
.author-roster-row:last-child { border-bottom: 0; }
.author-roster-name { color: #333; font-weight: 600; }
.author-roster-context { color: #666; }
.author-roster-note {
  color: #777;
  font-size: 0.68rem;
  font-weight: 600;
  letter-spacing: 0.04em;
  margin-left: 0.35rem;
  text-transform: uppercase;
}
.confidence-scale {
  border-bottom: 1px solid #d8d8d8;
  border-top: 1px solid #d8d8d8;
  display: grid;
  grid-template-columns: repeat(4, minmax(0, 1fr));
  margin: 0.8rem 0 1rem;
}
.confidence-level {
  align-items: center;
  background: #f3f6f8;
  display: flex;
  flex-direction: column;
  font-size: 0.74rem;
  line-height: 1.2;
  min-height: 3.2rem;
  padding: 0.4rem 0.28rem;
  text-align: center;
}
.confidence-level:nth-child(2),
.confidence-level:nth-child(3) { background: #faf8f2; }
.confidence-level strong {
  color: #28547a;
  font-size: 1.15rem;
  line-height: 1;
  margin-bottom: 0.25rem;
}
.confidence-presence { border-left: 2px solid #d6b75c; }
.eeg-pipeline-teaser { margin: 1.1rem 0 1.35rem; }
.eeg-pipeline-teaser a {
  aspect-ratio: 1630 / 565;
  display: block;
  overflow: hidden;
}
.eeg-pipeline-teaser img {
  border: 1px solid #e2e2e2;
  display: block;
  height: auto;
  width: 100%;
}
.eeg-pipeline-teaser figcaption {
  color: #666;
  font-size: 0.78rem;
  line-height: 1.35;
  margin-top: 0.35rem;
}
@media (max-width: 520px) {
  .author-roster-row {
    gap: 0.55rem;
    grid-template-columns: minmax(7.6rem, 0.9fr) minmax(9rem, 1.35fr);
  }
}
</style>

<div class="author-roster" aria-label="Full author group and institutional context">
  <div class="author-roster-row"><span class="author-roster-name">Wanying Tian <span class="author-roster-note">equal contributor</span></span><span class="author-roster-context">SFU Computing Science · Biomedical Physiology and Kinesiology</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Steven Bergner <span class="author-roster-note">equal contributor</span></span><span class="author-roster-context">SFU Computing Science</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Alexander Moiseev</span><span class="author-roster-context">SFU Biomedical Physiology and Kinesiology</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Fred Popowich</span><span class="author-roster-context">SFU Computing Science</span></div>
  <div class="author-roster-row"><span class="author-roster-name">George Medvedev</span><span class="author-roster-context">Royal Columbian Hospital · Fraser Health</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Mark P. Richardson</span><span class="author-roster-context">King's College London · King's College Hospital</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Roman Rodionov</span><span class="author-roster-context">UCL Queen Square · UCLH</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Pengcheng Xi</span><span class="author-roster-context">National Research Council Canada</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Sam M. Doesburg</span><span class="author-roster-context">SFU Biomedical Physiology and Kinesiology</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Urs Ribary</span><span class="author-roster-context">BC Children's Hospital Research Institute</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Joel S. Winston</span><span class="author-roster-context">King's College London · King's College Hospital</span></div>
  <div class="author-roster-row"><span class="author-roster-name">Vasily A. Vakorin <span class="author-roster-note">corresponding author</span></span><span class="author-roster-context">SFU Biomedical Physiology and Kinesiology · Royal Columbian Hospital · Fraser Health</span></div>
</div>

[Read medRxiv version 2][preprint] · [Cite the DOI][doi] · [Steven Bergner's ORCID][orcid]

Publication status and versioning should be read from the linked medRxiv
record. If the manuscript is accepted and published, this page will be updated
to point to the journal version of record.

[preprint]: https://www.medrxiv.org/content/10.64898/2026.07.07.26357190v2
[doi]: https://doi.org/10.64898/2026.07.07.26357190
[orcid]: https://orcid.org/0009-0009-7453-8923
