



<!DOCTYPE html>
<html>
<head>
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = null;
 
 
 var CS_env = {"token":null,"assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/9104208085135278598","projectName":"juced","projectHomeUrl":"/p/juced","absoluteBaseUrl":"http://code.google.com","relativeBaseUrl":"","urlPrefix":"p","loggedInUserEmail":null};
 </script>
 
 
 <title>jucetice_ImageKnob.h - 
 juced -
 
 
 Community driven trunk of the Juce Framework - Google Project Hosting
 </title>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/9104208085135278598/css/ph_core.css">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/9104208085135278598/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/9104208085135278598/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/9104208085135278598/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 </style>
</head>
<body class="t4">
 <script type="text/javascript">
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-1322554-3'],
 ['projectTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 </script>
<div class="headbg">
 <div id="gaia">
 

 <span>
 
 <a href="#" id="projects-dropdown" onclick="return false;"><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Fjuced%2Fsource%2Fbrowse%2Ftrunk%2Fjuce%2Fsrc%2Fextended%2Fcontrols%2Fjucetice_ImageKnob.h&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Fjuced%2Fsource%2Fbrowse%2Ftrunk%2Fjuce%2Fsrc%2Fextended%2Fcontrols%2Fjucetice_ImageKnob.h" onclick="_CS_click('/gb/ph/signin');"><u>Sign in</u></a>
 
 </span>

 </div>
 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->




 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0">
 <tr style="height: 58px;">
 
 <td id="plogo">
 <a href="/p/juced/">
 
 
 <img src="/p/juced/logo?cct=1306692633" alt="Logo">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/juced/">juced</a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link" href="/p/juced/" >Community driven trunk of the Juce Framework</a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/juced/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/juced/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/juced/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/juced/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/juced/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 
 
 <span class="inst1"><a href="/p/juced/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/juced/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/juced/source/list">Changes</a></span> &nbsp;
 
 <form action="http://www.google.com/codesearch" method="get" style="display:inline"
 onsubmit="document.getElementById('codesearchq').value = document.getElementById('origq').value + ' package:http://juced\\.googlecode\\.com'">
 <input type="hidden" name="q" id="codesearchq" value="">
 <input type="text" maxlength="2048" size="38" id="origq" name="origq" value="" title="Google Code Search" style="font-size:92%">&nbsp;<input type="submit" value="Search Trunk" name="btnG" style="font-size:92%">
 
 
 
 </form>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 
<!-- IE -->




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/juced/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/juced/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/juced/source/browse/trunk/juce/">juce</a><span class="sp">/&nbsp;</span><a href="/p/juced/source/browse/trunk/juce/src/">src</a><span class="sp">/&nbsp;</span><a href="/p/juced/source/browse/trunk/juce/src/extended/">extended</a><span class="sp">/&nbsp;</span><a href="/p/juced/source/browse/trunk/juce/src/extended/controls/">controls</a><span class="sp">/&nbsp;</span>jucetice_ImageKnob.h</span>
 
 

 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/juced/source/browse/trunk/juce/src/extended/controls/jucetice_ImageKnob.h?r=106" title="Previous">&lsaquo;r106</a></li>
 
 </ul>
 </td>
 
 <td class="flipper"><b>r175</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(http://www.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn175_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn175_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn175_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn175_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn175_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn175_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn175_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn175_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn175_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn175_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn175_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn175_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn175_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn175_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn175_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn175_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn175_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn175_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn175_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn175_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn175_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn175_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn175_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn175_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn175_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn175_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn175_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn175_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn175_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn175_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn175_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn175_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn175_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn175_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn175_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn175_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn175_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn175_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn175_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn175_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn175_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn175_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn175_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn175_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn175_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn175_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn175_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn175_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn175_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn175_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn175_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn175_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn175_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn175_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn175_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn175_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn175_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn175_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn175_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn175_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn175_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn175_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn175_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn175_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn175_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn175_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn175_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn175_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn175_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn175_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn175_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn175_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn175_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn175_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn175_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn175_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn175_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn175_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn175_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn175_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn175_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn175_82"

><td id="82"><a href="#82">82</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn175_1

><td class="source">/*<br></td></tr
><tr
id=sl_svn175_2

><td class="source"> ==============================================================================<br></td></tr
><tr
id=sl_svn175_3

><td class="source"><br></td></tr
><tr
id=sl_svn175_4

><td class="source"> This file is part of the JUCETICE project - Copyright 2009 by Lucio Asnaghi.<br></td></tr
><tr
id=sl_svn175_5

><td class="source"><br></td></tr
><tr
id=sl_svn175_6

><td class="source"> JUCETICE is based around the JUCE library - &quot;Jules&#39; Utility Class Extensions&quot;<br></td></tr
><tr
id=sl_svn175_7

><td class="source"> Copyright 2007 by Julian Storer.<br></td></tr
><tr
id=sl_svn175_8

><td class="source"><br></td></tr
><tr
id=sl_svn175_9

><td class="source"> ------------------------------------------------------------------------------<br></td></tr
><tr
id=sl_svn175_10

><td class="source"><br></td></tr
><tr
id=sl_svn175_11

><td class="source"> JUCE and JUCETICE can be redistributed and/or modified under the terms of<br></td></tr
><tr
id=sl_svn175_12

><td class="source"> the GNU General Public License, as published by the Free Software Foundation;<br></td></tr
><tr
id=sl_svn175_13

><td class="source"> either version 2 of the License, or (at your option) any later version.<br></td></tr
><tr
id=sl_svn175_14

><td class="source"><br></td></tr
><tr
id=sl_svn175_15

><td class="source"> JUCE and JUCETICE are distributed in the hope that they will be useful,<br></td></tr
><tr
id=sl_svn175_16

><td class="source"> but WITHOUT ANY WARRANTY; without even the implied warranty of<br></td></tr
><tr
id=sl_svn175_17

><td class="source"> MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the<br></td></tr
><tr
id=sl_svn175_18

><td class="source"> GNU General Public License for more details.<br></td></tr
><tr
id=sl_svn175_19

><td class="source"><br></td></tr
><tr
id=sl_svn175_20

><td class="source"> You should have received a copy of the GNU General Public License<br></td></tr
><tr
id=sl_svn175_21

><td class="source"> along with JUCE and JUCETICE; if not, visit www.gnu.org/licenses or write to<br></td></tr
><tr
id=sl_svn175_22

><td class="source"> Free Software Foundation, Inc., 59 Temple Place, Suite 330,<br></td></tr
><tr
id=sl_svn175_23

><td class="source"> Boston, MA 02111-1307 USA<br></td></tr
><tr
id=sl_svn175_24

><td class="source"><br></td></tr
><tr
id=sl_svn175_25

><td class="source"> ==============================================================================<br></td></tr
><tr
id=sl_svn175_26

><td class="source">*/<br></td></tr
><tr
id=sl_svn175_27

><td class="source"><br></td></tr
><tr
id=sl_svn175_28

><td class="source">#ifndef __JUCETICE_IMAGEKNOB_HEADER__<br></td></tr
><tr
id=sl_svn175_29

><td class="source">#define __JUCETICE_IMAGEKNOB_HEADER__<br></td></tr
><tr
id=sl_svn175_30

><td class="source"><br></td></tr
><tr
id=sl_svn175_31

><td class="source">#include &quot;jucetice_ParameterSlider.h&quot;<br></td></tr
><tr
id=sl_svn175_32

><td class="source"><br></td></tr
><tr
id=sl_svn175_33

><td class="source"><br></td></tr
><tr
id=sl_svn175_34

><td class="source">//==============================================================================<br></td></tr
><tr
id=sl_svn175_35

><td class="source">/**<br></td></tr
><tr
id=sl_svn175_36

><td class="source">     A knob based on stitched images<br></td></tr
><tr
id=sl_svn175_37

><td class="source">*/<br></td></tr
><tr
id=sl_svn175_38

><td class="source">class ImageKnob : public ParameterSlider<br></td></tr
><tr
id=sl_svn175_39

><td class="source">{<br></td></tr
><tr
id=sl_svn175_40

><td class="source">public:<br></td></tr
><tr
id=sl_svn175_41

><td class="source"><br></td></tr
><tr
id=sl_svn175_42

><td class="source">    //==============================================================================<br></td></tr
><tr
id=sl_svn175_43

><td class="source">    enum StitchOrientation<br></td></tr
><tr
id=sl_svn175_44

><td class="source">    {<br></td></tr
><tr
id=sl_svn175_45

><td class="source">        Horizontal = 0,<br></td></tr
><tr
id=sl_svn175_46

><td class="source">        Vertical   = 1<br></td></tr
><tr
id=sl_svn175_47

><td class="source">    };<br></td></tr
><tr
id=sl_svn175_48

><td class="source"><br></td></tr
><tr
id=sl_svn175_49

><td class="source">    //==============================================================================<br></td></tr
><tr
id=sl_svn175_50

><td class="source">    /** Constructor */<br></td></tr
><tr
id=sl_svn175_51

><td class="source">    ImageKnob (const String&amp; sliderName);<br></td></tr
><tr
id=sl_svn175_52

><td class="source"><br></td></tr
><tr
id=sl_svn175_53

><td class="source">    /** Destructor */<br></td></tr
><tr
id=sl_svn175_54

><td class="source">    ~ImageKnob();<br></td></tr
><tr
id=sl_svn175_55

><td class="source"><br></td></tr
><tr
id=sl_svn175_56

><td class="source">    //==============================================================================<br></td></tr
><tr
id=sl_svn175_57

><td class="source">    void setStitchedImage (Image* newImage,<br></td></tr
><tr
id=sl_svn175_58

><td class="source">                           StitchOrientation newOrientation,<br></td></tr
><tr
id=sl_svn175_59

><td class="source">                           const int newNumberOfSubImages);<br></td></tr
><tr
id=sl_svn175_60

><td class="source"><br></td></tr
><tr
id=sl_svn175_61

><td class="source">    //==============================================================================<br></td></tr
><tr
id=sl_svn175_62

><td class="source">    /** Set the default value */<br></td></tr
><tr
id=sl_svn175_63

><td class="source">    void setDefaultValue (const float newDefault);<br></td></tr
><tr
id=sl_svn175_64

><td class="source"><br></td></tr
><tr
id=sl_svn175_65

><td class="source">    //==============================================================================<br></td></tr
><tr
id=sl_svn175_66

><td class="source">    /** @internal */<br></td></tr
><tr
id=sl_svn175_67

><td class="source">    void paint (Graphics&amp; g);<br></td></tr
><tr
id=sl_svn175_68

><td class="source"><br></td></tr
><tr
id=sl_svn175_69

><td class="source">    //==============================================================================<br></td></tr
><tr
id=sl_svn175_70

><td class="source">    juce_UseDebuggingNewOperator<br></td></tr
><tr
id=sl_svn175_71

><td class="source"><br></td></tr
><tr
id=sl_svn175_72

><td class="source">private:<br></td></tr
><tr
id=sl_svn175_73

><td class="source"><br></td></tr
><tr
id=sl_svn175_74

><td class="source">    float defaultValue;<br></td></tr
><tr
id=sl_svn175_75

><td class="source">    Image* stitchedImage;<br></td></tr
><tr
id=sl_svn175_76

><td class="source">    StitchOrientation stitchedOrientation;<br></td></tr
><tr
id=sl_svn175_77

><td class="source">    int numberOfSubImages;<br></td></tr
><tr
id=sl_svn175_78

><td class="source">};<br></td></tr
><tr
id=sl_svn175_79

><td class="source"><br></td></tr
><tr
id=sl_svn175_80

><td class="source"><br></td></tr
><tr
id=sl_svn175_81

><td class="source">#endif // __JUCETICE_IMAGESLIDER_HEADER__<br></td></tr
><tr
id=sl_svn175_82

><td class="source"><br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn175_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn175_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta('', 'p', 'juced', this)">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta('', 'p', 'juced', this)">Hide details</a>
 </div>
 <div class="ifExpand">
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/juced/source/detail?spec=svn175&amp;r=137">r137</a>
 by kunitoki
 on Nov 10, 2009
 &nbsp; <a href="/p/juced/source/diff?spec=svn175&r=137&amp;format=side&amp;path=/trunk/juce/src/extended/controls/jucetice_ImageKnob.h&amp;old_path=/trunk/juce/src/extended/controls/jucetice_ImageKnob.h&amp;old=106">Diff</a>
 </div>
 <pre>- fixed a compilation problem in VS8
</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/juced/source/detail?r=137&spec=svn175';
 var publish_url = '/p/juced/source/detail?r=137&spec=svn175#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/juce/src/extended/controls/graph/jucetice_GraphConnectorComponent.h');
 changed_urls.push('/p/juced/source/browse/trunk/juce/src/extended/controls/graph/jucetice_GraphConnectorComponent.h?r\x3d137\x26spec\x3dsvn175');
 
 
 changed_paths.push('/trunk/juce/src/extended/controls/graph/jucetice_GraphLinkComponent.h');
 changed_urls.push('/p/juced/source/browse/trunk/juce/src/extended/controls/graph/jucetice_GraphLinkComponent.h?r\x3d137\x26spec\x3dsvn175');
 
 
 changed_paths.push('/trunk/juce/src/extended/controls/graph/jucetice_GraphNodeComponent.h');
 changed_urls.push('/p/juced/source/browse/trunk/juce/src/extended/controls/graph/jucetice_GraphNodeComponent.h?r\x3d137\x26spec\x3dsvn175');
 
 
 changed_paths.push('/trunk/juce/src/extended/controls/jucetice_AudioScopeComponent.h');
 changed_urls.push('/p/juced/source/browse/trunk/juce/src/extended/controls/jucetice_AudioScopeComponent.h?r\x3d137\x26spec\x3dsvn175');
 
 
 changed_paths.push('/trunk/juce/src/extended/controls/jucetice_ImageKnob.h');
 changed_urls.push('/p/juced/source/browse/trunk/juce/src/extended/controls/jucetice_ImageKnob.h?r\x3d137\x26spec\x3dsvn175');
 
 var selected_path = '/trunk/juce/src/extended/controls/jucetice_ImageKnob.h';
 
 
 changed_paths.push('/trunk/juce/src/extended/controls/jucetice_ImageSlider.h');
 changed_urls.push('/p/juced/source/browse/trunk/juce/src/extended/controls/jucetice_ImageSlider.h?r\x3d137\x26spec\x3dsvn175');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/juced/source/browse/trunk/juce/src/extended/controls/graph/jucetice_GraphConnectorComponent.h?r=137&amp;spec=svn175"
 
 >...cetice_GraphConnectorComponent.h</option>
 
 <option value="/p/juced/source/browse/trunk/juce/src/extended/controls/graph/jucetice_GraphLinkComponent.h?r=137&amp;spec=svn175"
 
 >...ph/jucetice_GraphLinkComponent.h</option>
 
 <option value="/p/juced/source/browse/trunk/juce/src/extended/controls/graph/jucetice_GraphNodeComponent.h?r=137&amp;spec=svn175"
 
 >...ph/jucetice_GraphNodeComponent.h</option>
 
 <option value="/p/juced/source/browse/trunk/juce/src/extended/controls/jucetice_AudioScopeComponent.h?r=137&amp;spec=svn175"
 
 >...s/jucetice_AudioScopeComponent.h</option>
 
 <option value="/p/juced/source/browse/trunk/juce/src/extended/controls/jucetice_ImageKnob.h?r=137&amp;spec=svn175"
 selected="selected"
 >...ed/controls/jucetice_ImageKnob.h</option>
 
 <option value="/p/juced/source/browse/trunk/juce/src/extended/controls/jucetice_ImageSlider.h?r=137&amp;spec=svn175"
 
 >.../controls/jucetice_ImageSlider.h</option>
 
 </select>
 </td></tr></table>
 
 
 



 <div style="white-space:nowrap">
 Project members,
 <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Fjuced%2Fsource%2Fbrowse%2Ftrunk%2Fjuce%2Fsrc%2Fextended%2Fcontrols%2Fjucetice_ImageKnob.h&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Fjuced%2Fsource%2Fbrowse%2Ftrunk%2Fjuce%2Fsrc%2Fextended%2Fcontrols%2Fjucetice_ImageKnob.h"
 >sign in</a> to write a code review</div>


 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/juced/source/detail?spec=svn175&r=106">r106</a>
 by kunitoki
 on Sep 5, 2009
 &nbsp; <a href="/p/juced/source/diff?spec=svn175&r=106&amp;format=side&amp;path=/trunk/juce/src/extended/controls/jucetice_ImageKnob.h&amp;old_path=/trunk/juce/src/extended/controls/jucetice_ImageKnob.h&amp;old=0">Diff</a>
 <br>
 <pre class="ifOpened">- aligned to juce 1.50 new structure
</pre>
 </div>
 
 
 <a href="/p/juced/source/list?path=/trunk/juce/src/extended/controls/jucetice_ImageKnob.h&start=137">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 2741 bytes,
 82 lines</div>
 
 <div><a href="//juced.googlecode.com/svn/trunk/juce/src/extended/controls/jucetice_ImageKnob.h">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="http://www.gstatic.com/codesite/ph/9104208085135278598/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="http://www.gstatic.com/codesite/ph/9104208085135278598/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://kibbles.googlecode.com/files/kibbles-1.3.3.comp.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="http://www.gstatic.com/codesite/ph/9104208085135278598/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn175': '/trunk/juce/src/extended/controls/jucetice_ImageKnob.h'}
 codereviews = CR_controller.setup(
 {"token":null,"assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/9104208085135278598","projectName":"juced","projectHomeUrl":"/p/juced","absoluteBaseUrl":"http://code.google.com","relativeBaseUrl":"","urlPrefix":"p","loggedInUserEmail":null}, '', 'svn175', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="http://www.gstatic.com/codesite/ph/9104208085135278598/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/9104208085135278598/js/ph_core.js"></script>
 
 
 
 
 <script type="text/javascript" src="/js/codesite_product_dictionary_ph.pack.04102009.js"></script>
</div> 
<div id="footer" dir="ltr">
 <div class="text">
 &copy;2011 Google -
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>
 
 


 
 </body>
</html>

