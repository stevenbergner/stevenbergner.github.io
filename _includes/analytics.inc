{% assign analytics_prefix = site.google_analytics | slice: 0, 2 %}
{% if analytics_prefix == "G-" %}
<script async src="https://www.googletagmanager.com/gtag/js?id={{ site.google_analytics }}"></script>
<script>
  window.dataLayer = window.dataLayer || [];
  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());
  gtag('config', '{{ site.google_analytics }}', {
    'allow_google_signals': false,
    'allow_ad_personalization_signals': false
  });
</script>
{% endif %}
