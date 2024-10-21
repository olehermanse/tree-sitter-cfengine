FROM fedora:40
RUN yum install -y python3.9
RUN yum install -y cargo
RUN yum install -y make
RUN yum install -y npm
RUN yum install -y git
RUN yum install -y gcc
RUN yum install -y g++
RUN cargo install tree-sitter-cli
WORKDIR /tree-sitter-cfengine
COPY ./ /tree-sitter-cfengine
RUN npm install
RUN npm run install
RUN /root/.cargo/bin/tree-sitter generate
RUN /root/.cargo/bin/tree-sitter build
RUN /root/.cargo/bin/tree-sitter test
RUN cargo build
RUN cargo test
RUN python3.9 -m venv venv
RUN . venv/bin/activate && pip install . && pip install tree_sitter && python tools/format_cfengine.py hello_world.cf
RUN git diff && git diff --exit-code
